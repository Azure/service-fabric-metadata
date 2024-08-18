# get idl
set(internal_idl_files
    fabricservicecommunication_.idl
    fabrictransport_.idl
    FabricTypes_.idl
)

set(out_headers "")
set(out_srcs "")
# download idls
foreach(_idl_file ${internal_idl_files})
    get_filename_component(_file_name ${_idl_file} NAME_WE)
    set(_idl_out_path ${CMAKE_CURRENT_SOURCE_DIR}/internal_idl/${_idl_file})
    if(NOT EXISTS ${_idl_out_path})
        message(STATUS "downloading ${_idl_file}")
        file(DOWNLOAD
            https://raw.githubusercontent.com/microsoft/service-fabric/master/src/prod/src/idl/internal/${_idl_file}
            ${_idl_out_path}
        )
    endif()

    set(_out_dir ${CMAKE_CURRENT_BINARY_DIR}/gen_internal)
    set(_out_header ${_out_dir}/${_file_name}.h)
    set(_out_src ${_out_dir}/${_file_name}_i.c)
    add_custom_command(
        OUTPUT ${_out_header} ${_out_src}
        BYPRODUCTS ${_out_dir}/${_file_name}_p.c ${_out_dir}/${_file_name}.tlb
        COMMAND ${MIDL_exe} /no_settings_comment /utf8 /sal /sal_local /I ${CMAKE_CURRENT_SOURCE_DIR}/idl /I ${CMAKE_CURRENT_SOURCE_DIR}/internal_idl ${_idl_out_path} /out ${_out_dir}
        COMMAND ${CMAKE_COMMAND} -E rm -f ${_out_dir}/${_file_name}_p.c ${_out_dir}/${_file_name}.tlb ${_out_dir}/dlldata.c
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        VERBATIM
    )
    list(APPEND out_headers ${_out_header})
    list(APPEND out_srcs ${_out_src})
endforeach()

# static lib that has uuids
# add_library(fabric_internal_uuids STATIC
#     ${out_srcs}
# )

# preprocess headers and write to idl source dir
# assuming coan tool has been configured by public targets
set(out_header_cpps "")
foreach(_header_c ${out_headers})
    get_filename_component(_file_name ${_header_c} NAME_WE)
    set(_out_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric_internal/include)
    set(_out_header_cpp ${_out_dir}/${_file_name}.h)
    add_custom_command(
        OUTPUT ${_out_header_cpp}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${_header_c} ${_out_header_cpp}
        # COMMAND powershell.exe -file "${fabric-metadata_SOURCE_DIR}/scripts/gen_cpp.ps1" -Source ${_header_c} -OutFile ${_out_header_cpp}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        DEPENDS ${_header_c}
    )
    list(APPEND out_header_cpps ${_out_header_cpp})
endforeach()

add_custom_target(copy_fabric_internal_uuid_files
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric_internal/src
  COMMAND ${CMAKE_COMMAND} -E copy_if_different ${out_srcs} ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric_internal/src
  DEPENDS ${out_srcs}
)

add_custom_target(generate_internal_cpp_headers
    DEPENDS ${out_header_cpps}
    copy_fabric_internal_uuid_files
)

# fabric cpp only headers
# add_library(fabric_internal_headers INTERFACE ${out_header_cpps})
# target_include_directories(fabric_internal_headers INTERFACE
#     ${CMAKE_CURRENT_BINARY_DIR}/include # generated includes
# )

# internal headers depends on public headers
# target_link_libraries(fabric_internal_headers
#     INTERFACE fabric_headers
# )
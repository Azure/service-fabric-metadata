find_program (
    MIDL_exe
    NAMES midl.exe
    REQUIRED
)

set(idl_files
    FabricClient.idl
    FabricCommon.idl
    FabricRuntime.idl
    FabricTypes.idl
)

set(out_headers "")
set(out_srcs "")

# download idls
foreach(_idl_file ${idl_files})
    get_filename_component(_file_name ${_idl_file} NAME_WE)
    set(_idl_out_path ${CMAKE_CURRENT_SOURCE_DIR}/idl/${_idl_file})
    if(NOT EXISTS ${_idl_out_path})
        message(STATUS "downloading ${_idl_file}")
        file(DOWNLOAD
            https://raw.githubusercontent.com/microsoft/service-fabric/master/src/prod/src/idl/public/${_idl_file}
            ${_idl_out_path}
        )
    endif()

    set(_out_dir ${CMAKE_CURRENT_BINARY_DIR}/gen)
    set(_out_header ${_out_dir}/${_file_name}.h)
    set(_out_src ${_out_dir}/${_file_name}_i.c)
    add_custom_command(
        OUTPUT ${_out_header} ${_out_src}
        COMMAND ${MIDL_exe} /no_settings_comment /utf8 /sal /sal_local /I ${CMAKE_CURRENT_SOURCE_DIR}/idl ${_idl_out_path} /out ${_out_dir}
        # remove unused outfile
        COMMAND ${CMAKE_COMMAND} -E rm -f ${_out_dir}/${_file_name}_p.c ${_out_dir}/${_file_name}.tlb ${_out_dir}/dlldata.c
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        VERBATIM
    )
    list(APPEND out_headers ${_out_header})
    list(APPEND out_srcs ${_out_src})
endforeach()

# static lib that has uuids
# add_library(fabric_uuids STATIC
#     ${out_srcs}
# )

### generate preprocessed header
### midl generated header has large portion of c defs that is never used by cpp.
### we generate the headers removing those c defs.
message(STATUS "fetching coan")
include(FetchContent)
FetchContent_Declare(coan
  URL https://master.dl.sourceforge.net/project/coan2/v6.0.1/coan-6.0.1-x86_64.exe
  URL_HASH MD5=d2a75c99b45b85e1cfb6e2864395e55b
  DOWNLOAD_NO_EXTRACT TRUE
)
FetchContent_GetProperties(coan)
if(NOT coan_POPULATED)
  FetchContent_Populate(coan)
endif()

find_program(_coan_exe
    NAMES coan.exe coan-6.0.1-x86_64.exe
    PATHS ${coan_SOURCE_DIR}
    REQUIRED
)

#preprocess headers and write to fabric lib src dir
set(out_header_cpps "")
foreach(_header_c ${out_headers})
    get_filename_component(_file_name ${_header_c} NAME_WE)
    set(_out_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric/include)
    set(_out_header_cpp ${_out_dir}/${_file_name}.h)
    add_custom_command(
        OUTPUT ${_out_header_cpp}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${_header_c} ${_out_header_cpp}
        # coan produces utf16 that is problematic
        # COMMAND powershell.exe -file "${fabric-metadata_SOURCE_DIR}/scripts/gen_cpp.ps1" -Source ${_header_c} -OutFile ${_out_header_cpp}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR} # coan relative to the cmake source dir
        DEPENDS ${_header_c}
    )
    list(APPEND out_header_cpps ${_out_header_cpp})
endforeach()

add_custom_target(copy_fabric_uuid_files
  COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric/src
  COMMAND ${CMAKE_COMMAND} -E copy_if_different ${out_srcs} ${CMAKE_CURRENT_SOURCE_DIR}/src/fabric/src
  DEPENDS ${out_srcs}
)

# generate trimmed cpp headers into src/fabric/include
add_custom_target(generate_cpp_headers
    DEPENDS ${out_header_cpps}
    copy_fabric_uuid_files
)

# fabric cpp only headers
# add_library(fabric_headers INTERFACE ${out_header_cpps})
# target_include_directories(fabric_headers INTERFACE
#     ${CMAKE_CURRENT_BINARY_DIR}/include # generated includes
# )

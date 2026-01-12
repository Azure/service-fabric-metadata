# This CMake script downloads necessary internal IDL files for Service Fabric if they do not already exist.
set(internal_idl_files
    fabricservicecommunication_.idl
    fabrictransport_.idl
    FabricTypes_.idl
)

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
endforeach()
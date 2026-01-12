
# This CMake script downloads necessary IDL files for Service Fabric if they do not already exist.
set(idl_files
    FabricClient.idl
    FabricCommon.idl
    FabricRuntime.idl
    FabricTypes.idl
)

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
endforeach()

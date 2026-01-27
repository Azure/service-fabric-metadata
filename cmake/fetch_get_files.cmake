
# This CMake script downloads necessary IDL files for Service Fabric if they do not already exist.
set(idl_files
    FabricClient.idl
    FabricCommon.idl
    FabricRuntime.idl
    FabricTypes.idl
)

# idls from sf-c-util repo which is managed by another azure team.
# The idl has version 11.1
# To update idl files, remove the existing files and change the commit hash below to the latest one from
set(_remote_dir https://raw.githubusercontent.com/Azure/sf-c-util/bb29234abb6c542bd71bf7710fcc2aa7f04683cb/deps/servicefabric/idl)

# download idls
foreach(_idl_file ${idl_files})
    get_filename_component(_file_name ${_idl_file} NAME_WE)
    set(_idl_out_path ${CMAKE_CURRENT_SOURCE_DIR}/idl/${_idl_file})
    if(NOT EXISTS ${_idl_out_path})
        message(STATUS "downloading ${_idl_file}")
        file(DOWNLOAD
            ${_remote_dir}/${_idl_file}
            ${_idl_out_path}
        )
    endif()
endforeach()

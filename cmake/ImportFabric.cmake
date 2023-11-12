function(add_fabric_lib)
    cmake_parse_arguments(
        FABRIC_LIB # prefix of output variables
        "" # list of names of the boolean arguments (only defined ones will be true)
        "NAME" # list of names of mono-valued arguments
        #"SRCS;DEPS" # list of names of multi-valued arguments (output variables are lists)
        ""
        ${ARGN} # arguments of the function to parse, here we take the all original ones
    )

    if(NOT FABRIC_LIB_NAME)
        message(FATAL_ERROR "Name param not found")
    endif(NOT FABRIC_LIB_NAME)
    # message("Provided sources are:")
    # foreach(src ${PARSED_ARGS_SRCS})
    #     message("- ${src}")
    # endforeach(src)
if(WIN32)
    set(_lib_var "${FABRIC_LIB_NAME}_DLL")
    set(_lib_file "${FABRIC_LIB_NAME}.dll")
    set(_out_file "${FABRIC_LIB_NAME}.lib")
    find_file(${_lib_var}
        NAMES ${_lib_file}
        PATHS ${ServiceFabric_Runtime_BINARY_DIR}
        REQUIRED
    )
    message(STATUS "Found ${FABRIC_LIB_NAME}: ${${_lib_var}}")

    # generate fabric import lib
    add_custom_command(
        OUTPUT ${fabric-metadata_SOURCE_DIR}/importlibs/${_out_file}
        COMMAND ${fabric-metadata_SOURCE_DIR}/scripts/dll2lib.bat 64 "${${_lib_var}}"
        WORKING_DIRECTORY ${fabric-metadata_SOURCE_DIR}/importlibs
        VERBATIM
    )

    add_library(${FABRIC_LIB_NAME} SHARED IMPORTED GLOBAL)

    #set_target_properties(FabricClient PROPERTIES IMPORTED_IMPLIB ${CMAKE_CURRENT_BINARY_DIR}/FabricClient.lib )
    set_target_properties(${FABRIC_LIB_NAME} PROPERTIES
        IMPORTED_LOCATION ${_lib_var}
        IMPORTED_IMPLIB ${fabric-metadata_SOURCE_DIR}/importlibs/${_out_file}
    )

    set(_generate_target_name "generate_${FABRIC_LIB_NAME}_lib")
    add_custom_target(${_generate_target_name}
        DEPENDS 
        ${fabric-metadata_SOURCE_DIR}/importlibs/${_out_file}
    )

    add_dependencies(${FABRIC_LIB_NAME} ${_generate_target_name})
else(WIN32)
    set(_lib_file "lib${FABRIC_LIB_NAME}.so")
    set(_lib_var "${FABRIC_LIB_NAME}_SO")
    find_file(${_lib_var}
        NAMES ${_lib_file}
        PATHS ${ServiceFabric_Runtime_BINARY_DIR}
        REQUIRED
    )
    add_library(${FABRIC_LIB_NAME} SHARED IMPORTED GLOBAL)
    set_target_properties(${FABRIC_LIB_NAME} PROPERTIES
        IMPORTED_LOCATION ${_lib_var}
    )
endif(WIN32)
endfunction(add_fabric_lib)
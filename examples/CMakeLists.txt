file(GLOB SOURCES
  include/*.h
  *.cpp
)

add_executable(fabric_example
    ${SOURCES}
)

target_link_libraries(fabric_example
  PUBLIC fabric_sdk
)
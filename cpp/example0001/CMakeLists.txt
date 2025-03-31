add_executable(example0001 main.cpp)

# rerun_sdk
target_link_libraries(example0001 PRIVATE rerun_sdk)
message(STATUS "rerun_sdk_SOURCE_DIR: ${rerun_sdk_SOURCE_DIR}")
target_include_directories(example0001 PRIVATE
    ${rerun_sdk_SOURCE_DIR}/src
)
set_target_properties(example0001 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

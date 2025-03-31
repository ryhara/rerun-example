add_executable(example0002 main.cpp)

# rerun_sdk
target_link_libraries(example0002 PRIVATE rerun_sdk)
message(STATUS "rerun_sdk_SOURCE_DIR: ${rerun_sdk_SOURCE_DIR}")
target_include_directories(example0002 PRIVATE
    ${rerun_sdk_SOURCE_DIR}/src
)
set_target_properties(example0002 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# OpenCV (optional)
target_link_libraries(example0002 PRIVATE ${OpenCV_LIBS})
target_include_directories(example0002 PRIVATE ${OpenCV_INCLUDE_DIRS})

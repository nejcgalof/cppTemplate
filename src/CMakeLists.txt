add_executable(demo main.cpp)

target_include_directories(demo PRIVATE "${CMAKE_BINARY_DIR}/configured_files/include")

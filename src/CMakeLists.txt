add_executable(demo main.cpp informations.cpp)

target_link_libraries(demo PRIVATE project_options project_warnings)

target_include_directories(demo PRIVATE "${CMAKE_SOURCE_DIR}/include" "${CMAKE_BINARY_DIR}/configured_files/include")

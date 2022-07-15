add_library(demo_shared SHARED lib.cpp)
target_link_libraries(demo_shared project_options project_warnings)
target_include_directories(demo_shared PUBLIC "${CMAKE_SOURCE_DIR}/include"
                                              "${CMAKE_BINARY_DIR}/configured_files/include")

add_executable(demoExec main.cpp)
target_link_libraries(demoExec PRIVATE project_options project_warnings demo_shared)

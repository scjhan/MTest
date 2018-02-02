include_directories(../mtest)

add_executable(example main.cc)

add_dependencies(example mtest)

target_link_libraries(example ${PROJECT_BINARY_DIR}/mtest/libmtest.so)
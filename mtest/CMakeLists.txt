add_library(mtest_shared SHARED mtest.cc)
set_target_properties(mtest_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(mtest_shared PROPERTIES VERSION 1.0 SOVERSION 1.0)
set_target_properties(mtest_shared PROPERTIES OUTPUT_NAME "mtest")

add_library(mtest_static STATIC mtest.cc)
set_target_properties(mtest_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(mtest_static PROPERTIES OUTPUT_NAME "mtest")

install(TARGETS mtest_shared mtest_static
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)
install(FILES mtest.h DESTINATION include)
#pragma once

#include "mtest-internal.h"


#define REGISTER_TEST(TEST_NAME) REGISTER_TEST_(TEST_NAME)

#define TEST(TEST_NAME) TEST_(TEST_NAME)

#define RUN_ALL_TESTS() RUN_ALL_TESTS_()

#define CLEAR_ALL_TESTS() CLEAR_ALL_TESTS_()
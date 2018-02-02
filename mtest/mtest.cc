#include "mtest.h"

#include <iostream>

MTest* MTest::instance_ = new MTest();

MTest * MTest::Instance()
{
	return instance_;
}

void MTest::RegisterTest(const char test_name[], const Invoke &invoke)
{
	tests_.insert(std::make_pair(test_name, invoke));
}

void MTest::Clear()
{
	tests_.clear();
}

void MTest::RunAllTests()
{
	for (auto test : tests_) {
		std::cout << "[ RUN      ] " << test.first << std::endl;
		test.second();
		std::cout << "[       OK ] " << test.first << std::endl;
	}
}
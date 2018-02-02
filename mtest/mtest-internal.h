#pragma once

#include <map>
#include <string>
#include <functional>

#define TEST_INVOKE_NAME(TEST_NAME) TEST_NAME##_CLASS::INVOKE

#define REGISTER_TEST_(TEST_NAME) MTest::Instance()->RegisterTest(#TEST_NAME, TEST_INVOKE_NAME(TEST_NAME))

#define RUN_ALL_TESTS_() MTest::Instance()->RunAllTests()

#define CLEAR_ALL_TESTS_() MTest::Instance()->Clear()

#define TEST_(TEST_NAME) \
class TEST_NAME##_CLASS { \
public: \
	TEST_NAME##_CLASS(const std::string &name) : name_(name) {} \
	static void INVOKE(); \
private: \
	std::string name_; \
}; \
void TEST_NAME##_CLASS::INVOKE()

class MTest
{
public:
	typedef std::function<void()> Invoke;
public:
	static MTest * Instance();
	void RegisterTest(const char test_name[], const Invoke &invoke);
	void Clear();
	void RunAllTests();
private:
	static MTest * instance_;
	std::map<std::string, Invoke> tests_;
};
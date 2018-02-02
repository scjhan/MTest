#include <iostream>

#include "mtest.h"

TEST(HelloWorld) {
	std::cout << "hello world" << std::endl;
}

TEST(LoopPrint) {
	for (int i = 0; i < 10; ++i) {
		std::cout << i << " " << std::endl;
	}
}

int main()
{
	REGISTER_TEST(HelloWorld);
	REGISTER_TEST(LoopPrint);

	RUN_ALL_TESTS();

	CLEAR_ALL_TESTS();

	return 0;
}
**mtest, a c++ testing tool**
## Build
```shell
mkdir build && cd build
cmake -DCMAKE_INSTALL_PREFIX=./install # [option]
make && make install
```
then will generate those fils:
```shell
./install/include/mtest.h
./install/lib/libmtest.so
./install/lib/libmtest.a
```
## Use MTest

### Generate test

```c++
#include <iostream>
#include <include/metst.h>

TEST(HelloTest) {
  std::cout << "Hello MTest!" << std::endl;
}

int main()
{
  REGISTER_TEST(HelloTest);
  RUN_ALL_TESTS();

  return 0;
}
```
### Build & Run test
```shell
g++ -std=c++11 -o main main.cc -lmtest
./main
```
### Test output
```shell
Hello MTest!
```

# gtest-demo

C/C++ unit test demo using [Google Test](https://code.google.com/p/googletest)

- Licensed under [BSD-3](../master/LICENSE)


## How to build this demo

```bash
git clone https://github.com/bast/gtest-demo.git
cd gtest-demo
cmake -S. -Bbuild 
cmake --build build
```
## Running the App
```
./build/bin/FactApp 
Factorial of 5 is 120
```

## Running the tests

Either using `ctest`:
```
$ cd build
$ ctest

Running tests...
Test project /home/user/gtest-demo/build
    Start 1: unit
1/1 Test #1: unit .............................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.00 sec
```

Or directly using `unit_tests`:
```
$ cd build 
$ ./bin/unit_tests

[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from example
[ RUN      ] example.add
[       OK ] example.add (0 ms)
[ RUN      ] example.subtract
[       OK ] example.subtract (0 ms)
[----------] 2 tests from example (1 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 2 tests.

```
##  Export the results to output.xml:
```
$ ./bin/unit_tests --gtest_output=xml:output.xml
```
Let's load this output.xml into 
https://codebeautify.org/xmlviewer/46c9c8#




## Acknowledgments & References
https://github.com/bast/gtest-demo
https://www.geeksforgeeks.org/gtest-framework/



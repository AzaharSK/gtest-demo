# gtest-demo

C/C++ unit test demo using [Google Test](https://code.google.com/p/googletest)

- Licensed under [BSD-3](../master/LICENSE)


## How to build this demo

```bash
git clone https://github.com/AzaharSK/gtest-demo.git
cd gtest-demo
code .
![image](https://github.com/user-attachments/assets/c02c2944-e33e-4522-a33d-90203944de15)


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
    Start 1: test_calculations.FactorialOfZeroShouldBeOne
1/2 Test #1: test_calculations.FactorialOfZeroShouldBeOne ...   Passed    0.00 sec
    Start 2: test_calculations.FactorialOfPositiveNos
2/2 Test #2: test_calculations.FactorialOfPositiveNos .......   Passed    0.00 sec

100% tests passed, 0 tests failed out of 2

Label Time Summary:
unit    =   0.01 sec*proc (2 tests)

Total Test time (real) =   0.01 sec

```

Or directly using `unit_tests`:
```
$ cd build 
$ ./bin/unit_tests

Running main() from /home/user/gtest-demo/build/_deps/gtest-src/googletest/src/gtest_main.cc
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from test_calculations
[ RUN      ] test_calculations.FactorialOfZeroShouldBeOne
[       OK ] test_calculations.FactorialOfZeroShouldBeOne (0 ms)
[ RUN      ] test_calculations.FactorialOfPositiveNos
[       OK ] test_calculations.FactorialOfPositiveNos (0 ms)
[----------] 2 tests from test_calculations (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.

```
##  Export the results to output.xml:
```
$ ./bin/unit_tests --gtest_output=xml:output.xml
```
Let's load this output.xml into 
https://codebeautify.org/xmlviewer/46c9c8#




## Acknowledgments & References

https://github.com/bast/gtest-demo .
https://www.geeksforgeeks.org/gtest-framework/ .


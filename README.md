# cmake-google-test-skeleton
Skeleton for C++ projects using CMake and google-test

To compile and test:
Compile:

mkdir build
cd build
cmkae ../

To compile and execute the tests:
cmake --build . --target compile_and_test

To only compile:
cmake --build . --target all -- -j 2

To only launch tests:
ctest

The compiled tests under '<project_source_dir>/build/tests'
For instance, to execute the two available suites:
./tests/complexTest
./tests/Test

A hellow-world executable is compiled under '<project_source_dir>/build/' and can be executed:
./ejercicio1

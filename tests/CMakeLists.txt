cmake_minimum_required(VERSION 3.8)
project(EarlyReturnKata.tests)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
        main.cpp
		Test.cpp)
add_executable(EarlyReturnKata.tests ${SOURCE_FILES} )
add_test(NAME EarlyReturnKata.tests COMMAND EarlyReturnKata.tests)
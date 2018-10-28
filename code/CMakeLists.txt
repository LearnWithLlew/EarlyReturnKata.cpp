cmake_minimum_required(VERSION 3.8)
project(EarlyReturnKata.code CXX)
set(SOURCE_FILES
        Lesson1EaryReturns.h
         )
add_library(EarlyReturnKata.code ${SOURCE_FILES} )

set_target_properties(EarlyReturnKata.code PROPERTIES LINKER_LANGUAGE CXX)

cmake_minimum_required(VERSION 3.21)
project(Maps)

set(CMAKE_CXX_STANDARD 23)

add_executable(Maps main.cpp Maps/Angle.h Maps/Point.h Maps/Border.h Maps/WidgetMap.h Maps/WidgetMap.cpp Maps/OneMillionMap/OneMillionMap.cpp Maps/OneMillionMap/OneMillionMap.h Maps/Map.h Maps/FiveHundredThousandMap/FiveHundredThousandMap.cpp Maps/FiveHundredThousandMap/FiveHundredThousandMap.h Maps/TwoHundredThousandMap/TwoHundredThousandMap.cpp Maps/TwoHundredThousandMap/TwoHundredThousandMap.h Maps/OneHundredThousandMap/OneHundredThousandMap.cpp Maps/OneHundredThousandMap/OneHundredThousandMap.h Maps/FiftyThousandMap/FiftyThousandMap.cpp Maps/FiftyThousandMap/FiftyThousandMap.h)

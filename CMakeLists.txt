cmake_minimum_required(VERSION 3.24)
project(untitled19)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled19 main.cpp GumballMachine.h GumballMachine.cpp State.h NoQuarterState.h NoQuarterState.cpp HasQuarterState.h HasQuarterState.cpp SoldState.h SoldState.cpp SoldOutState.h SoldOutState.cpp WinnerState.h WinnerState.cpp)

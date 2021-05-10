cmake_minimum_required(VERSION 3.17)
project(BinPackingProblem)

set(CMAKE_CXX_STANDARD 14)

add_executable(BinPackingProblem main.cpp Passenger.cpp Passenger.h BinPacking.cpp BinPacking.h PassengerManager.cpp PassengerManager.h IViaje.cpp IViaje.h Normal.cpp Normal.h BusManager.cpp BusManager.h Bus.cpp Bus.h Vehicle.cpp Vehicle.h Driver.cpp Driver.h)
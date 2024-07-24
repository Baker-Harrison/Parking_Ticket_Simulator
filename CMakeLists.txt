cmake_minimum_required(VERSION 3.28)
project(Parking_Ticket_Simulator_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Parking_Ticket_Simulator_4 main.cpp
        src/ParkedCar.cpp
        include/ParkedCar.h
        include/ParkingMeter.h
        src/ParkingMeter.cpp
        include/ParkingTicket.h
        src/ParkingTicket.cpp
        include/PoliceOfficer.h
        src/PoliceOfficer.cpp)

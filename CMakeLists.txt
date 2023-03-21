cmake_minimum_required(VERSION 3.24)
project(Huespedes)

include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Huespedes main.cpp src/Propietario.cpp src/Propietario.h src/Main.cpp test/Huespedes_test.cpp src/Huesped.cpp src/Huesped.h src/Reserva.cpp src/Reserva.h src/Evaluacion.cpp src/Evaluacion.h src/Hogar.cpp src/Hogar.h src/Clinica.cpp src/Clinica.h)

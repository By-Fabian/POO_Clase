cmake_minimum_required(VERSION 3.15)
project(Ejercicio1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio1 main.cpp alumno.h alumno.cpp profesor.cpp profesor.h include.h curso.cpp curso.h seccion.cpp seccion.h)
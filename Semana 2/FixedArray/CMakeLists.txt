#Minimo requerido de cmake
CMAKE_MINIMUM_REQUIRED(VERSION 3.22)

project(FixedArray) #Nombre del proyecto

#Caracteristicas del c++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

#Definir los archivos a compilar
add_executable( ${CMAKE_PROJECT_NAME}
 FixedArray.hpp 
 Main.cpp
 )
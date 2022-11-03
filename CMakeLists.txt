cmake_minimum_required(VERSION 3.23)
project(labo_calendrier)

set(CMAKE_CXX_STANDARD 20)

add_executable(labo_calendrier main.cpp affichage.cpp affichage.hpp saisie.cpp saisie.hpp date.cpp date.hpp affichage_calendrier.cpp)

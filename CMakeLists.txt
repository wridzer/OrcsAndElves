cmake_minimum_required(VERSION 3.19)
project(OrcsAndElves)

set(CMAKE_CXX_STANDARD 14)

add_executable(OrcsAndElves main.cpp NPC.cpp NPC.h Orc.cpp Orc.h Elf.cpp Elf.h)
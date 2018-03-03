cmake_minimum_required(VERSION 2.8)

project(gehoerbildung)
add_executable(${PROJECT_NAME} "main.cpp")

file(COPY speech DESTINATION ".")


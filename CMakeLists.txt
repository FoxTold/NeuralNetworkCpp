cmake_minimum_required(VERSION 3.10)

set(project_name "neural_network_cpp")

project(${project_name})

add_executable(${project_name} 
    src/main.cpp
    src/neuron.h
    src/neuron.cpp
    )
set_property(TARGET ${project_name} PROPERTY CXX_STANDARD 17)

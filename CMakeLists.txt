cmake_minimum_required(VERSION 3.10)
project(binary_search_tree)

set(CMAKE_CXX_STANDARD 14)

add_executable(bst
        binarytree.h bintree.cpp
        object.cpp object.h
        comparable.h comparable.cpp
        main.cpp comparable.cpp book.cpp book.h)
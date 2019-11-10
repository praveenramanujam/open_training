# CPP

## Basic steps from a file to an executable/library

Preprocessing -> Compilation -> Linking

To understand preprocessing, CPP has following preprocessor directives. It uses these directives to generate independent files

These directives are as follows:

```
#include
#define
#undef
#ifdef
#ifndef
#if
#else
#elif
#endif
#error
#pragma
```

The files are pre-processed before compilation to generate minimum number of files
g++ is a compiler that is used in general to compile a program, however you can stop at pre-processing to see the output

```g++ -E preprocessing.cpp```



## I/O

http://www.physics.utah.edu/~detar/lessons/c++/canned_classes/node4.html


## Debugging

Common debugger that we use is gdb
Compile the program in debug mode

```g++ -g preprocessing.cpp```

to run the program

```
gdb ./a.out
```

As part of the basics, we should be able to:

1. Set the breakpoint
1. list the file
1. print a variable


## CMake
```
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(learning_cpp)
add_executable(console console.cpp)
```

The above CMakeLists.txt has the minimum lines required for compilation

commands that can be used to configure

```
cmake 
```
or
```
cmake-gui
```

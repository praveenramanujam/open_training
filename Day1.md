# CPP

## Basic steps from a file to an executable/library

Preprocessing -> Compilation -> Linking

To understand preprocessing, CPP has following preprocessor directives. It uses these directives to generate independent files

These directives are as follows:

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


The files are pre-processed before compilation to generate minimum number of files
g++ is a compiler that is used in general to compile a program, however you can stop at pre-processing to see the output

```g++ -E preprocessing.cpp```

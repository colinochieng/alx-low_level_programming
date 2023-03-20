#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o liball.so
export LD_LIBRAARY_PATH=.:$LD_LIBRARY_PATH

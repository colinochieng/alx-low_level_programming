#!/bin/bash
gcc -c -fPIC calc.c
gcc -shared calc.o -o 100-operations.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

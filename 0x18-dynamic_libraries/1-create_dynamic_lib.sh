#!/bin/bash
gcc -c *.c | gcc *.o -FPIC -shared -o liball.so

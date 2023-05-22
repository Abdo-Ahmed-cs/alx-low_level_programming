#!/bin/bash
gcc *.c -c -fPIC
gcc -shared -o liball.so *.o

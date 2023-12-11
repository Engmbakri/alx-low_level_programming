#!/bin/bash
gcc -c fpic *.c
gcc -share *.o -o liball.so

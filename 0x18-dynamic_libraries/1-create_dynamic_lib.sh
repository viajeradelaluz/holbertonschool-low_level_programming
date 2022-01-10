#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared -o libdynamic.so *.o

#!/bin/bash

# Compile all the .c files into a dynamic library named liball.so
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.c

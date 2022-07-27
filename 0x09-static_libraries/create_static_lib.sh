#!/bin/bash -e
gcc -Wall -Pedantic -Werror -Wextra -c *.c
ar cr liball.a *.o

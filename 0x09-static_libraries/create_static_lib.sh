#!/bin/bash
ranlib liball.a
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rc liball.a *.o

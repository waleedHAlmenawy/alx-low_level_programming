#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu98 -c *.c
ar -rc liball.a *.o
ranlib liball.a

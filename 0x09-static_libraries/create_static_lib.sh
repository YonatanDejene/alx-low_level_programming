#!/bin/bash
gcc -Wall -Wxtra -Werror -pedantic -c *.c
ar rc liball.a *.o

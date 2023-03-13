#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -fno-PIC *.c
ar -rcs liball.a *.o

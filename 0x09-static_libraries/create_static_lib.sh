#!/bin/bash
gcc -c -Wal -Werror -Wextra -pedantic -std=gnu89 *.c
ar -rcs liball.a *.o

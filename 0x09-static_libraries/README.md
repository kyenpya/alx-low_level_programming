Static Library - libmy.a and liball.a

This repository contains two static libraries: libmy.a and liball.a, along with a script to create the liball.a library from the source code files in the current directory.

Library Details

libmy.a

Library containing various standard C functions.
Functions included:
_putchar
_islower
_isalpha
_abs
_isupper
_isdigit
_strlen
_puts
_strcpy
_atoi
_strcat
_strncat
_strncpy
_strcmp
_memset
_memcpy
_strchr
_strspn
_strpbrk
_strstr

liball.a
Library created by the create_static_lib.sh script.
Contains all the source code files in the current directory compiled into object files.

Usage
Compiling and Linking with libmy.a
gcc -std=gnu89 main.c -L. -lmy -o quote

Creating liball.a (Static Library)
./create_static_lib.sh


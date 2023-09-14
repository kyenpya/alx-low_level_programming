Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions are functions in C that can accept a variable number of arguments.

Task 0: Beauty is variable, ugliness is constant

**File:** 0-sum_them_all.c

This task involves writing a function `sum_them_all` that returns the sum of all its parameters. If `n` is 0, it returns 0.

Task 1: To be is to be the value of a variable

**File:** 1-print_numbers.c

In this task, we create a function `print_numbers` that prints a list of numbers separated by a specified separator. It takes a variable number of integers and prints them. If the separator is `NULL`, it doesn't print it.

Task 2: One woman's constant is another woman's variable

**File:** 2-print_strings.c

This task involves creating a function `print_strings` that prints a list of strings separated by a specified separator. It also takes a variable number of strings as arguments. If a string is `NULL`, it prints "(nil)" instead.

Task 3: To be is a to be the value of a variable

**File:** 3-print_all.c

The final task introduces a function `print_all` that can print values of different types based on a format string. It accepts the following format specifiers:

- `c`: char
- `i`: integer
- `f`: float
- `s`: char * (if the string is NULL, it prints "(nil)")

The function ignores any other characters in the format string. It uses printf to print the values and ends with a new line.

Each task is implemented in a separate C file, and there are corresponding main programs to demonstrate the functionality.

You can compile and run each task separately to see how they work.

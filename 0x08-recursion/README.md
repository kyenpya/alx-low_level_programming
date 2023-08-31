This repository contains C programs that demonstrate the use of recursion to solve various problems.
Table of content
1. Description
2. Tasks
3. How to use
4. File Descriptions

Description
Recursion is a programming technique where a function calls itself to solve a problem. In this repository, you'll find C programs that use recursion to solve different tasks.

Tasks
Task 0: Print a String with Recursion
File: 0-puts_recursion.c
Description: Write a function that prints a string, followed by a new line.
Prototype: void _puts_recursion(char *s);

Task 1: Print a String in Reverse
File: 1-print_rev_recursion.c
Description: Write a function that prints a string in reverse.
Prototype: void _print_rev_recursion(char *s);

Task 2: Calculate the Length of a String
File: 2-strlen_recursion.c
Description: Write a function that returns the length of a string.
Prototype: int _strlen_recursion(char *s);

Task 3: Calculate the Factorial of a Number
File: 3-factorial.c
Description: Write a function that returns the factorial of a given number.
Prototype: int factorial(int n);

Task 4: Calculate the Power of a Number
File: 4-pow_recursion.c
Description: Write a function that returns the value of x raised to the power of y.
Prototype: int _pow_recursion(int x, int y);

Task 5: Calculate the Square Root
File: 5-sqrt_recursion.c
Description: Write a function that returns the natural square root of a number.
Prototype: int _sqrt_recursion(int n);

Task 6: Check for Prime Number
File: 6-is_prime_number.c
Description: Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
Prototype: int is_prime_number(int n);

How to Use
To compile and run these programs, you can follow these steps:

Clone the repository to your local machine:

git clone https://github.com/yourusername/alx-low_level_programming.git
Navigate to the 0x08-recursion directory:
cd alx-low_level_programming/0x08-recursion
Compile the desired program using gcc:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o output_name

Run the compiled program:
./output_name
File Descriptions
0-puts_recursion.c: Contains the implementation of the function to print a string with recursion.

1-print_rev_recursion.c: Contains the implementation of the function to print a string in reverse with recursion.

2-strlen_recursion.c: Contains the implementation of the function to calculate the length of a string with recursion.

3-factorial.c: Contains the implementation of the function to calculate the factorial of a number with recursion.

4-pow_recursion.c: Contains the implementation of the function to calculate the power of a number with recursion.

5-sqrt_recursion.c: Contains the implementation of the function to calculate the square root of a number with recursion.

6-is_prime_number.c: Contains the implementation of the function to check if a number is prime with recursion.

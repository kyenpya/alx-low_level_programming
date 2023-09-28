Bit Manipulation
This project contains a collection of C functions for performing various bit manipulation tasks. Each function is designed to solve a specific problem related to binary number manipulation.

Function List
0. unsigned int binary_to_uint(const char *b)
Converts a binary number represented as a string to an unsigned integer.
Returns the converted number or 0 if the input contains non-binary characters or is NULL.

1. void print_binary(unsigned long int n)
Prints the binary representation of an unsigned long integer.
Uses bitwise operations to avoid array usage and the % or / operators.

2. int get_bit(unsigned long int n, unsigned int index)
Retrieves the value of a bit at a specified index in an unsigned long integer.
Returns the value of the bit or -1 if an error occurs.

3. int set_bit(unsigned long int *n, unsigned int index)
Sets the value of a bit at a specified index to 1 in an unsigned long integer.
Returns 1 if successful, or -1 if an error occurs.

4. int clear_bit(unsigned long int *n, unsigned int index)
Sets the value of a bit at a specified index to 0 in an unsigned long integer.
Returns 1 if successful, or -1 if an error occurs.

5. unsigned int flip_bits(unsigned long int n, unsigned long int m)
Counts the number of bits that need to be flipped to transform one unsigned long integer into another.
Does not use the % or / operators.

Usage
To use these functions, include the appropriate header file and call the function with the required parameters. Each function is documented with its prototype and usage instructions.

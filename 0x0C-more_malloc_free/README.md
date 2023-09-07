Project Name: Malloc and Free

Description
This project contains C functions that demonstrate memory allocation and deallocation using `malloc`, `calloc`, and `free`. The functions are designed to perform the following tasks:

0. Malloc Checked
- Function Name: `malloc_checked`
- Prototype: `void *malloc_checked(unsigned int b);`
- Description: Allocates memory using `malloc`. If `malloc` fails, the function terminates the program with a status value of 98.

1. String Concatenation
- Function Name: string_nconcat
- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
- Description: Concatenates two strings, with an option to limit the number of characters from the second string to concatenate. Returns a newly allocated string.

2. Calloc
- Function Name: _calloc
- Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
- Description: Allocates memory for an array using calloc. The memory is initialized to zero. Returns a pointer to the allocated memory.

3. Array Range
- Function Name: array_range
- Prototype: int *array_range(int min, int max);
- Description: Creates an array of integers with values from min to max, inclusive. Returns a pointer to the newly created array.

Malloc and Free Functions
This repository contains C programs that demonstrate the use of malloc and free functions to dynamically allocate and deallocate memory. Each program accomplishes a specific task as described below:
Task 0: Float like a butterfly, sting like a bee
File: 0-create_array.c
Description: This program defines a function create_array that creates an array of characters and initializes it with a specific character. It returns a pointer to the array or NULL if it fails.
Task 1: The woman who has no imagination has no wings
File: 1-strdup.c
Description: This program defines a function _strdup that returns a pointer to a newly allocated space in memory containing a copy of the input string. It returns NULL if the input string is NULL or if there is insufficient memory available.
Task 2: He who is not courageous enough to take risks will accomplish nothing in life
File: 2-str_concat.c
Description: This program defines a function str_concat that concatenates two strings and returns a pointer to the newly allocated space in memory containing the concatenated string. It treats NULL as an empty string and returns NULL on failure.
Task 3: If you even dream of beating me you'd better wake up and apologize
File: 3-alloc_grid.c
Description: This program defines a function alloc_grid that returns a pointer to a 2-dimensional array of integers, with each element initialized to 0. It returns NULL on failure or if the width or height is 0 or negative. The main function demonstrates the usage of alloc_grid to allocate and print a grid.
Task 4: It's not bragging if you can back it up
Files: 4-free_grid.c, 4-main.c
Description: This program defines a function free_grid that frees a 2-dimensional grid previously created by alloc_grid. The main function demonstrates the usage of both alloc_grid and free_grid to allocate, manipulate, and deallocate a grid.
These programs showcase the practical use of memory allocation and deallocation in C programming and serve as a foundation for working with dynamic memory in more complex applications.

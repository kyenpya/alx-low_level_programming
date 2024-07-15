# 0x1E. C - Search Algorithms

## Description

This project covers various search algorithms, their implementations, and their complexities. You will learn how to implement and use linear and binary search algorithms in C.

## Learning Objectives

By the end of this project, you should be able to explain:

- What is a search algorithm
- What is a linear search
- What is a binary search
- The best search algorithm to use depending on your needs

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables
- No more than 5 functions per file
- You are only allowed to use the `printf` function of the standard library. Any call to other functions like `strdup`, `malloc`, etc., is forbidden.
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- All header files should be include guarded

## Project Tasks

### 0. Linear search

- **File:** `0-linear.c`
- **Prototype:** `int linear_search(int *array, size_t size, int value);`
- **Description:** Searches for a value in an array of integers using the linear search algorithm. Returns the first index where the value is located or -1 if the value is not present or the array is NULL.

### 1. Binary search

- **File:** `1-binary.c`
- **Prototype:** `int binary_search(int *array, size_t size, int value);`
- **Description:** Searches for a value in a sorted array of integers using the binary search algorithm. Returns the index where the value is located or -1 if the value is not present or the array is NULL.

### 2. Big O #0

- **File:** `2-O`
- **Description:** Contains the time complexity (worst case) of a linear search in an array of size n.

### 3. Big O #1

- **File:** `3-O`
- **Description:** Contains the space complexity (worst case) of an iterative linear search algorithm in an array of size n.

### 4. Big O #2

- **File:** `4-O`
- **Description:** Contains the time complexity (worst case) of a binary search in an array of size n.

### 5. Big O #3

- **File:** `5-O`
- **Description:** Contains the space complexity (worst case) of a binary search in an array of size n.

### 6. Big O #4

- **File:** `6-O`
- **Description:** Contains the space complexity of the function/algorithm provided:

  ```c
  int **allocate_map(int n, int m)
  {
      int **map;
      map = malloc(sizeof(int *) * n);
      for (size_t i = 0; i < n; i++)
      {
          map[i] = malloc(sizeof(int) * m);
      }
      return (map);
  }

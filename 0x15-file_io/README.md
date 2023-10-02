File I/O

This repository contains a collection of C functions for file input and output operations. Each function is designed to perform specific tasks related to file handling.

Tasks

0. Read Text File
ssize_t read_textfile(const char *filename, size_t letters)
Reads a text file and prints its content to the standard output.
Parameters:
filename: Name of the file to read.
letters: The number of letters to read and print.
Returns the actual number of letters read and printed, or 0 if there is an error.

1. Create File
int create_file(const char *filename, char *text_content)
Creates a file with the specified name and writes the provided text content to it.
Parameters:
filename: Name of the file to create.
text_content: NULL-terminated string to write to the file.
Returns 1 on success, -1 on failure.

2. Append Text to File
int append_text_to_file(const char *filename, char *text_content)
Appends text to the end of an existing file or creates a new file if it does not exist.
Parameters:
filename: Name of the file to which text should be appended.
text_content: NULL-terminated string to append to the file.
Returns 1 on success, -1 on failure.

3. Copy File
int cp(const char *file_from, const char *file_to)
Copies the content of one file to another file.
Parameters:
file_from: Name of the source file.
file_to: Name of the destination file.
Returns 0 on success, -1 on failure.

Usage
To use these functions, include the appropriate header file and call the function with the required parameters. Each function is documented with its prototype and usage instructions.

Example usage (for each function) can be found in the corresponding main program in the repository.

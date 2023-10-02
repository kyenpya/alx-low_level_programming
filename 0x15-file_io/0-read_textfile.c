#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and  printed or
 * 0 if file cannot be read, opened  or if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;

	ssize_t b_read, b_write;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);
	if (file_d ==  -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	b_read = read(file_d, buffer, letters);
	if (b_read == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	b_write = write(STDOUT_FILENO, buffer, b_read);
	if (b_write == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	close(file_d);
	return (b_read);
}

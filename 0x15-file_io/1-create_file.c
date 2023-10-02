#include "main.h"

/**
 * create_file - creates a file
 * @filename: points to the name of the file
 * @text_content: points to a string
 * Return: 1 on success, -1 if it fails or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, b_write, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b_write = write(file_d, text_content, len);

	if (file_d == -1 || b_write == -1)
	{
		return (-1);
	}
	close(file_d);
	return (1);
}

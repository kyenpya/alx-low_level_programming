#include "main.h"

/**
 * append_text_to_file - appendstext at the end of a file
 * @filename: points to the file name
 * @text_content: points to string to be appended
 * Return: 1 on success or -1 if fails or filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int b_read, b_write, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	b_read = open(filename, O_WRONLY | O_APPEND);
	b_write = write(b_read, text_content, len);

	if (b_read == -1 || b_write == -1)
		return (-1);
	close(b_read);
	return (1);
}

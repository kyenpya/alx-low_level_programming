#include "main.h"

char *cbuff(char *file);
void close_file(int file_d);

/**
 * cbuff - allocates bytes for buffer
 * @file: name of file stores character for
 * Return: pointer to new buffer
 */

char *cbuff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes file descriptor
 * @file_d: the file descriptor to close
 */

void close_file(int file_d)
{
	int rufe;

	rufe = close(file_d);

	if (rufe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d);
		exit(100);
	}
}

/**
 * main - entry, copies one file content to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int a, b, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = cbuff(argv[2]);
	a = open(argv[1], O_RDONLY);
	rd = read(a, buff, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(b, buff, rd);
		if (b == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(a, buff, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(a);
	close_file(b);

	return (0);
}

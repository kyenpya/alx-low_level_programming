#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little,0for big
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

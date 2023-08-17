#include "main.h"

/**
 * print_numbers - will print numbers from 0 to 9
 * Return: 0 (success)
 */
void print_numbers(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
		_putchar(nums);
	_putchar('\n');
}

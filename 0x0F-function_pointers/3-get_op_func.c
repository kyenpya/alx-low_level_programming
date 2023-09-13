#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects operation function
 * @s: argument passed
 * Return: pointer to fn to corresponding parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	int ind = 0;

	while (ops[ind].op != NULL && *(ops[ind].op) != *s)
		ind++;

	return (ops[ind].f);
}

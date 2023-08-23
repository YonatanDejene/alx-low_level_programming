#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
* get_op_func - Function that selects the correct function to perform.
* @s: Oprator passed as argument.
*
* Return: Int.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"*", op_mul},
		{"+", op_add},
		{"/", op_div},
		{"%", op_mod},
		{"-", op_sub},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}

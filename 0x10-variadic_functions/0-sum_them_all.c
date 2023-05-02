#include "variadic_functions.h"

/**
* sum_them_all - adds all the numbers
* @n: the number of parameters passed
* Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int j;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (j = 0; j < n; j++)
		s += va_arg(ap, int);

	va_end(ap);
	return (s);
}

#include "main.h"

/**
 * print_binary - Prints a base 2 of base 10 number
 * @n: base 10 number
 */

void print_binary(unsigned long int n)
{
	unsigned long int crnt;
	int k, c = 0;

	for (k = 63; k >= 0; k--)
	{
		crnt = n >> k;

		if (crnt & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

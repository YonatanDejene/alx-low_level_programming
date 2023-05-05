#include "main.h"

/**
 * print_binary - Convert decimal int to binary.
 * @n: Decimal number.
 */

void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int crnt;

	for (j = 63; j >= 0; j--)
	{
		crnt = n >> j;

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

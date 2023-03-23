#include "main.h"

/**
 * print_line - Draws a line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}

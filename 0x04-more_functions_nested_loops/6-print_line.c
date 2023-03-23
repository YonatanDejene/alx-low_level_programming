#include "main.h"

/**
 * print_line - prints a line
 * @n: the value passed
 * Return: Nothing to retrun
 */

void print_line(int n)
{
	int i;
	
	for(i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}

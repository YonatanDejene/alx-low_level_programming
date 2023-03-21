#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: is the number to check
 * Return: Always Success.
 */

int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	_putchar('+');
	return (1);
}

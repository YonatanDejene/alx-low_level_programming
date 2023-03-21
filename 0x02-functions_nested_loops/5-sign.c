#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: is the number to check
 * Return: returns 1 if a number is greater than 0, returns 0 if the number is 0 and returns -1 if it is less than 0.
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

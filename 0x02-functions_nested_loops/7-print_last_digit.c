#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the digit
 * Return: Always Success.
 */

int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (mod < 0)
	{
	mod = mod * -1;
	}
	_putchar(mod + '0');
	return (mod);
}

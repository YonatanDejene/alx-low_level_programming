#include "main.h"

/**
 * print_numbers - Prints number 0-9
 * Return: The numbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}

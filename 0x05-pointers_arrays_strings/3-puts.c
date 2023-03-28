#include <stdio.h>

#include "main.h"

/**
 * _puts - writes a string
 * @str: the string passed to the function
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

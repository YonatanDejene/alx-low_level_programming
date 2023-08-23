#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Retrun: nothing
 */

void print_rev(char *s)
{
	int ch = 0;

	while (s[ch] != '\0')
	{
	ch++;
	}

	for (ch -= 1; ch >= 0; ch--)
	{
	_putchar(s[ch]);
	}
	_putchar('\n');
}

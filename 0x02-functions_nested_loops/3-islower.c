#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a letter is lowercase or not
 *@c: The character to be checked
 * Return: 1 for lowercase character or 0for anything else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

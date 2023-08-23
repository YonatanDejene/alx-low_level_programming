#include "main.h"

#include <stdio.h>

/**
 * _isupper - checks a character if it is uppercase or not
 * @c: the character to be checked
 * Return: return 1 if it is upper case and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}

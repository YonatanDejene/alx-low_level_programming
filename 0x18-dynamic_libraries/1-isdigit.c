#include "main.h"

/**
 * _isdigit - Checks if a given value is a number or not.
 * @c: Given character.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c: the char to be checked
 * Return: returns 1 if it is a digit 0 if not
 */

int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

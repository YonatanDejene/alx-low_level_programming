#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit or not
 * @c: the char to be checked
 * Return: returns 1 if it is a digit 0 if not
 */

int _isdigit(int c)
{
	if( c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}

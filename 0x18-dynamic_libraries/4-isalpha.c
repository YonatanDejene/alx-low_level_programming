#include "main.h"

/**
 * _isalpha - checks the letter
 * @c: charachter to be checked
 * Return: 1 if c is a letter, 0 if anyting else.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

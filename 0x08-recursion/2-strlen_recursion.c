#include "main.h"

/**
* _strlen_recursion - Calc length of the string given
* @s: String to be counted
*
* Return: int.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}

	s++;
	return (_strlen_recursion(s) + 1);
}

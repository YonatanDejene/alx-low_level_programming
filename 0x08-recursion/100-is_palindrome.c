#include "main.h"

/**
* _strlen_recursion - Calc the length of a string.
* @s: The string given.
*
* Return: Length.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* comparator - Compares a given string character by character.
* @s: String given.
* @n1: The small iterator.
* @n2: The big iterator.
* Return: --.
*/

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}

	return (0);
}

/**
* is_palindrome - Checks if a given string is palindrome or not.
* @s: String given.
*
* Return: 1 if palindrom and 0 if not palindrom.
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

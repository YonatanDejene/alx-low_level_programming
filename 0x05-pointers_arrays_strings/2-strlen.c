#include <stdio.h>

#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}

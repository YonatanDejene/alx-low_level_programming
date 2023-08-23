#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the string passed
 * @s: the string to be reversed
 * Retrun: nothing
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char c;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	c = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = c;
	}
}

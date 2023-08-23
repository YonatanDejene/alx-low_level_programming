#include "main.h"

/**
 * _memset - Fill constant values to memory.
 * @s: Pointer.
 * @b: Constant.
 * @n: Memo area.
 * Return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

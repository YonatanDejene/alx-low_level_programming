#include <stdio.h>

/**
 * main - prints alphabet except q & e
 * cmpiles..
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'q' && c != 'e')
	{
	putchar(c);
	}
	}
	putchar('\n');
	return (0);
}

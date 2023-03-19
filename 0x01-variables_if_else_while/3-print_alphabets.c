#include <stdio.h>

/**
 * main - prints alphabet both in upper and lower
 * Return : Always (0)
 *
 */

int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	return (0);
}

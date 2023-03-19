#include <stdio.h>

/**
 * main - prints alphabet both in upper and lower
 * compiling..
 * Return: Always (Success)
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
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}

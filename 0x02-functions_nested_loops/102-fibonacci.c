#include <stdio.h>

/**
 * main - prints ficbonacci
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n, first = 1, second = 2, next;
	
	for (n = 0; n < 50; n++)
	{
	if (n <= 1)
	{
	next = n + 1;
	}
	else
	{
	next = first + second;
	first = second;
	second = next;
	}
	printf("%d, ", next);
	}
	return (0);
}

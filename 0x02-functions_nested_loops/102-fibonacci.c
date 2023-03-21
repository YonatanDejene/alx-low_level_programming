#include <stdio.h>

/**
 * main - prints ficbonacci
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int n;
	int temp;

	for (n = 0; n < 50; n++)
	{
	printf(i);
	printf(", ");
	printf(j);
	temp = j;
	j += i;
	i = temp;
	}
}

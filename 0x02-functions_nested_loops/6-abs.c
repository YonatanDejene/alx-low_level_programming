#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @n: number to be computed
 * Return: Always Success
 */

int _abs(int n)
{
	int ab = 0;

	if (n < 0)
	{
	ab = -1 * n;
	return (ab);
	}
	if (n > 0)
	{
	ab = n;
	return (ab);
	}
	return (ab);
}

#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
* _sqrt_recursion - Calculate the square root of a number
* @n: The given number
*
* Return: The result.
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - Calc square root
* @n: Given number
* @i: Itrator
*
* Return: The square root.
*/

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

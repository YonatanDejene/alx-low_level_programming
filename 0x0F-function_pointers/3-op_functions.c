#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Addition function.
 * @a: First Num.
 * @b: Second Num.
 *
 * Return: Result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_mul - Multiplication function.
* @a: First Num.
* @b: Second Num.
*
* Return: Result.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_sub - Subtraction Function.
* @a: First Num.
* @b: Second Num.
*
* Return: Result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mod - Modules Function
* @a: First Num.
* @b: Second Num.
*
* Return: Result.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

/**
* op_div - Division Functino.
* @a: First Num.
* @b: Second Num.
*
* Return: Result.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

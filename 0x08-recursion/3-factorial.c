#include "main.h"

/**
* factorial - Calc factorial of a given number.
* @n: Number the factorial to be calculated
*
* Return: int.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

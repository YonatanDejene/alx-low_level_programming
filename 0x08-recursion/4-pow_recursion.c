#include "main.h"

/**
* _pow_recursion - Calculate the exponential of x to y.
* @x: Input number
* @y: The times to multiply x.
*
* Return: The result.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

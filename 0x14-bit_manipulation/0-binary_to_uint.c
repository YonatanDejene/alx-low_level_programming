#include "main.h"

/**
 * binary_to_uint - converts base two to unsined base 10
 * @b: binary string
 *
 * Return: base 10 of the base 2
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int k;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal = 2 * decimal + (b[k] - '0');
	}

	return (decimal);
}

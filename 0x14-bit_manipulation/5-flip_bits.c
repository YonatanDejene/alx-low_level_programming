#include "main.h"

/**
 * flip_bits - Count the num of bits.
 * @m: 2nd number.
 * @n: 1st number.
 * Return: Number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int crnt;
	unsigned long int exc = n ^ m;
	int j, c = 0;

	for (j = 63; j >= 0;j --)
	{
		crnt = exc >> j;
		if (crnt & 1)
			c++;
	}

	return (c);
}

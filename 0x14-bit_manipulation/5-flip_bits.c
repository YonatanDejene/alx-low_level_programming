#include "main.h"

/**
 * flip_bits -counts bits
 * @n: the first num
 * @m: the second num
 *
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int crnt;
	int k, c = 0;
	unsigned long int exc = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		crnt = exc >> k;
		if (crnt & 1)
			c++;
	}

	return (c);
}

#include "main.h"

/**
 * get_bit - Returns a bit in a decimal number
 * @n: Num to be searched.
 * @index: Index.
 *
 * Return: bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bv;

	if (inde > 63)
		return (-1);

	bv = (n >> index) & 1;
	return (bv);
}

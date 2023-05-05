#include "main.h"

/**
 * set_bit - Sets bit at a given index to 1
 * @n: Pointer.e
 * @index: index of the bit.1
 *
 * Return: 1 0 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

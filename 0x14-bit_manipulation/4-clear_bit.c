#include "main.h"

/**
 * clear_bit - Set a value to a bit given.
 * @n: Pointer.
 * @index: Index of the bit.
 *
 * Return: 1 if success and -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

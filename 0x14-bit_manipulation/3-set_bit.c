#include "main.h"

/**
 * set_bit - Sets biton given index
 * @n: pointer to num
 * @index: index
 *
 * Return: 1 if success, -1 if else
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

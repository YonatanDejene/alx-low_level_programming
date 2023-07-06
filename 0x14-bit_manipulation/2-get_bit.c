#include "main.h"

/**
 * get_bit - returns the bit at index in a base 10
 * @n: num to search
 * @index: index
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}

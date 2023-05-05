#include "main.h"

/**
 * get_endianness - Check if a given machine is big or little.
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *ch = (char *) &j;

	return (*ch);
}

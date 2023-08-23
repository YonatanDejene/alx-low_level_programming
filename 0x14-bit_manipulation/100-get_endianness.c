#include "main.h"

/**
 * get_endianness -checks weather a given machine is big or little endian
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *ch = (char *) &k;

	return (*ch);
}

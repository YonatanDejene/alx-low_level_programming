#include <unistd.h>
#include "main.h"

/**
 * _putchar -Writes character C.
 * @c: The caracter to be written.
 *
 * Return: 1 is success.
 * -1 if not.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

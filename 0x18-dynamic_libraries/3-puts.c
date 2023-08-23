#include "main.h"
/**
 * _puts - Prints string,
 * @str: Pointer to the string
 * Return: void
*/


void _puts(char *str)
{
int indx = 0;
while (str[indx])
{
	_putchar(str[indx]);
	indx++;
}
_putchar('\n');
}

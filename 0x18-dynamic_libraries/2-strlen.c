#include "main.h"
/**
 * _strlen - Find the length of a string
 * @s: Pointer to the string
 * Return: C
*/

int _strlen(char *s)
{
int c = 0;
while (s[c])
	c++;

return (c);
}

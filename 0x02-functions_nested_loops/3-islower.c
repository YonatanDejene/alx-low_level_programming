#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a letter is lowercase or not
 *Return: Always 0.
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

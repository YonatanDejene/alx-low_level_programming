#include "main.h"
/**
 * _strncpy - Copy a string
 * @dest: Destination.
 * @src: Source.
 * @n: Amount of bytes from src.
 * Return: Pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int indx;

	for (indx = 0; indx < n && src[indx] != '\0'; indx++)
	{
		dest[indx] = src[indx];
	}
	while (indx < n)
	{
		dest[indx] = '\0';
		indx++;
	}
	return (dest);
}

#include "main.h"

/**
  * _memcpy - Copys memory area.
  * @dest: pointer.
  * @src: Source memory.
  * @n: bytes from memory area to copy.
  *
  * Return: The pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: Destination.
 * @src: Source.
 * @n: Amount of bytes used from src.
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int space_1 = 0;
  int space_2 = 0;

	while (*(dest + space_1) != '\0')
	{
		space_1++;
	}

	while (space_2 < n)
	{
		*(dest + space_1) = *(src + space_2);
		if (*(src + space_2) == '\0')
			break;
		space_1++;
		space_2++;
	}
	return (dest);
}

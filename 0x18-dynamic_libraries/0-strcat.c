#include "main.h"

/**
 * _strcat - Appends sorce string to destination string
 * @dest: String to append
 * @src: String to append
 *
 * Return: Address of @dest
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int l;

	k = 0;
	l = 0;
	while (*(dest + k))
		l++;
	while ((*(dest + k) = *(src + l)))
	{
		k++;
		l++;
	}
	return (dest);
}

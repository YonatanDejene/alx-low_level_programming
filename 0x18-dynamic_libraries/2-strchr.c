#include "main.h"

/**
  * _strchr - Locates characters in a string
  * @s: Source string
  * @c: Character
  *
  * Return: String
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[a])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}

#include "lists.h"

/**
 * list_len - calculates the number of elements
 * @h: Pointer
 * Return: Int
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int n = 0;

	temp = h;
	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}

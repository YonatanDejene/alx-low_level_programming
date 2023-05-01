#include "lists.h"

/**
 * listint_len - Calculate the no of elements in a list
 * @h: linked list of listint_t
 *
 * Return: No of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}

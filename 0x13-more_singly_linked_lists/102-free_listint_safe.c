#include "lists.h"

/**
 * free_listint_safe - Free the linked list
 * @h: Pointer
 *
 * Return: No of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

#include "lists.h"

/**
 * sum_listint - Calculates the su
 * @head: First node.
 *
 * Return: Sum.
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s = s + t->n;
		t = t->next;
	}

	return (s);
}

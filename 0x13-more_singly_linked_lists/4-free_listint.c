#include "lists.h"

/**
 * free_listint - Free the list
 * @head: List to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

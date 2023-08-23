#include "lists.h"

/**
 * reverse_listint - Perform reverse
 * @head: Pointer
 *
 * Return: Pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}

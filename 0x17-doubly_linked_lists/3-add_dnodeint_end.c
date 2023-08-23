#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end.
 * @head: Head.
 * @n: Value.
 * Return: Address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *j;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	j = *head;

	if (j != NULL)
	{
		while (j->next != NULL)
			j = j->next;
		j->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = j;
	return (new);
}

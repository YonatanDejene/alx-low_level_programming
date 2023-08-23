#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list.
 * @head: Head.
 * @n: Value.
 * Return: Address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *j;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	j = *head;

	if (j != NULL)
	{
		while (j->prev != NULL)
			j = j->prev;
	}

	new->next = j;

	if (j != NULL)
		j->prev = new;

	*head = new;

	return (new);
}

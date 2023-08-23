#include "lists.h"

/**
 * add_nodeint - Add a new node at a start
 * @head: pintes to the first element
 * @n: data to be inserted
 *
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));
	if (!m)
		return (NULL);

	m->n = n;

	m->next = *head;
	*head = m;

	return (m);
}

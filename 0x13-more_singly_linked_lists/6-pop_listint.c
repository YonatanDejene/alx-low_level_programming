#include "lists.h"

/**
 * pop_listint - Delete the first node
 * @head: pointer
 * Return: The deleted data
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int no;

	if (!head || !head)
		return (0);

	no = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (no);
}

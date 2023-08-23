#include "lists.h"

/**
 * get_nodeint_at_index - checks the node at a certain index
 * @head: first node
 * @index: Index of teh node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}

	return (t ? t : NULL);
}

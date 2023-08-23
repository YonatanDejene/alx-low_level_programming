#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of the list.
 * @head: Head
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int size;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);

	size++;
	temp = temp->next;
	}
	return (NULL);
}

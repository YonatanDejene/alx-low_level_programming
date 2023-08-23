#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j;
	dlistint_t *k1 = *head;
	dlistint_t *k2;

	if (k1 != NULL)
		while (k1->prev != NULL)
			k1 = k1->prev;

	j = 0;

	while (k1 != NULL)
		{
			if (j == index)
			{
				if (j != 0)
				{
					k2->next = k1->next;

					if (k1->next != NULL)
						k1->next->prev = k2;
				}
				else
				{
					*head = k1->next;
					if (*head != NULL)
						(*head)->prev = NULL;
				}

				free(k1);
				return (1);
			}
			k2 = k1;
			k1 = k1->next;
			j++;
		}

	return (-1);
}

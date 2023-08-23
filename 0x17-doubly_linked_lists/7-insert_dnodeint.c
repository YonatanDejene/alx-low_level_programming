#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at given index
 * @h: Head
 * @idx: Index
 * @n: Value
 * Return: If success: Address of the new node, if failed: NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	unsigned int i;
	dlistint_t *head;

	if (idx != 0)
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next != NULL)
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				else
				{
					new = add_dnodeint_end(h, n);
				}
				break;
			}

			head = head->next;
			i++;
		}
	}
	else
	{
		new = add_dnodeint(h, n);
	}

	return (new);
}

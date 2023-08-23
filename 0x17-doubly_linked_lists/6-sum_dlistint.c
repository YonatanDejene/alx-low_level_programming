#include "lists.h"

/**
 * sum_dlistint - Returns the sum of elements in the list.
 * @head: Head.
 * Return: Sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sumAll = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sumAll += head->n;
			head = head->next;
		}
	}

	return (sumAll);
}

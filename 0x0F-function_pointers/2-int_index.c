#include "function_pointers.h"


/**
* int_index - A function that searchs for an int.
* @array: The array.
* @size: Size of the array.
* @cmp: pointer to the function to be used to compare values.
*
* Return: Index.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}


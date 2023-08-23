#include "function_pointers.h"


/**
* array_iterator - Function given.
*
* @array: Array.
* @size: Size of the array.
* @action: Pointer.
*
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;

		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}

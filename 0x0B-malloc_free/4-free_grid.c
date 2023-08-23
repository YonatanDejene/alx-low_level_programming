#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the main function
 * @grid: passed value
 * @height: passed value
 *
 * Return: success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

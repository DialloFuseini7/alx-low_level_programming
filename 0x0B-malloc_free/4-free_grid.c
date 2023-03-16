#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - free a 2 dimension array of integers
 * @grid: grid to free^2 :wq
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

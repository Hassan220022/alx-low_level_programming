#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the 2 dimensional array of integers.
 * @height: height of the array
 *
 * Return: pointer to the 2 dimensional array of integers.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

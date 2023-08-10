#include "main.h"

/**
* free_grid - prints number of argument passed
*
* @grid: argument
* @height: argument
*  Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

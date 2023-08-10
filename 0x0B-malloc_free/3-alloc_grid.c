#include "main.h"

/**
* alloc_grid - pointer to a one dimensional array
*
* @width: argument
* @height: argument
*  Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < height; k++)
				free(ptr[k]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

#include "main.h"

/**
* array_range - creates an array of integers
*
* @min: minimum number
* @max: minimum number
*  Return: pointer to new created array
*/
int *array_range(int min, int max)
{
	int *ptr, i, add;

	add = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (add + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < add + 1; i++)
	{
		ptr[i] = min;
		min += 1;
	}
	return (ptr);
}

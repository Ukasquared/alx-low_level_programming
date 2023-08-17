#include "function_pointers.h"

/**
* int_index - function that executes a function
* given as a parameter on each element of array
* @array: pointer to the array
* @size: size of array
* @cmp: pointer to the function that will be used
*
* Return: index of array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		index = (*cmp)(*(array + i));
		if (index)
			return (i);
	}
	return (-1);
}

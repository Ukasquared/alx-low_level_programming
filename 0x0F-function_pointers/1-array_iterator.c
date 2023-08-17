#include "function_pointers.h"

/**
* array_iterator - function that executes a function
* given as a parameter on each element of array
* @array: pointer to the array
* @size: size of array
* @action: pointer to the function that will be used
*
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(*(array + i));
	}
}

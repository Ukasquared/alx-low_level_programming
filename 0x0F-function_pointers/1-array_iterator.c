#include "function_pointers.h"
/**
* array_iterator - iterates the array
* @array: array
* @size: size if array
* @action: function pointer
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && f != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}

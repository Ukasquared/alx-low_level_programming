#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: previously allocated memory
* @old_size: size in bytes of the allocated space for ptr
* @new_size: new size in bytes of the new memory block 
*  Return: pointer to the new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr1, *argptr;
	unsigned int i, j;

	argptr = ptr;

	if (new_size == old_size)
		return (argptr);
	if (!argptr)
	{
		ptr1 = malloc(sizeof(int) * new_size);
		return(ptr1);
	}
	if (new_size == 0 && argptr)
	{
		free(argptr);
		return (NULL);
	}
	ptr1 = malloc(sizeof(int) * new_size);
	for (i = 0, j = 0; i < new_size && j < old_size; i++, j++)
		ptr1[i] = argptr[j];
	free(argptr);
	return (ptr1);
}

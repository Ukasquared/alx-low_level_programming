#include "main.h"

/**
* malloc_checked - prints number of argument passed
*
* @b: value to store in heap
*  Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

#include "main.h"

void _memset(char *c, int b, int size);

/**
* _calloc - allocates memory for an array
*
* @nmemb: element of size bytes
* @size: size of data type
*  Return: pointer to allocater memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
* _memset- set memory to 0
* @c: arg
* @b: arg
* @size: arg
* Return:void
*/

void _memset(char *c, int b, int size)
{
	int i;

	for (i = 0; i < size; i++)
		c[i] = b;
}

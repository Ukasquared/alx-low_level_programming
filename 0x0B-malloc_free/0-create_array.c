#include "main.h"

/**
* create_array - creates an array of chars,
* and initialize it with a specific char
*
* @size: size of array
* @c: specific character
*  Return: pointer to the character
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	*(ptr + i) = '\0';
	return (ptr);
}

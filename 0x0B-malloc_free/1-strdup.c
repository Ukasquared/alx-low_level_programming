#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
* space in memory, which contains a copy of
* the string given as a parameter.
*
* @str: string to be copied
*  Return: pointer
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * _strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}


/**
* _strlen - find length of string
*
* @str: string
* Return: the length
*/

int _strlen(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

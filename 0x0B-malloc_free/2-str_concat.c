#include "main.h"

/**
* main - function that concatenates two strings
*
* @s1: first string
* @s2: second string
*  Return: pointer to the new string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * (len1 + len2));
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*ptr = *s1;
		s1++;
		ptr++;
	}
	while (*s2 != '\0')
	{
		*ptr = *s2;
		s2++;
		ptr++;
	}
	*ptr++ = '\0';
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

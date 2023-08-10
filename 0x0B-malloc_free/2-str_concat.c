#include "main.h"

/**
* str_concat - function that concatenates two strings
*
* @s1: first string
* @s2: second string
*  Return: pointer to the new string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int i, j, len1, len2;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
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
	int n = 0;

	while (str[n] != '\0')
	n++;
	return (n);
}

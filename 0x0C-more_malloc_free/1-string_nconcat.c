#include "main.h"

/**
* string_nconcat - concatenates strings
* @n: number of character to add
* @s1: first string
* @s2: second string
* Return: ponter
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		ptr = malloc(sizeof(int) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(int) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; i < (len1 + n) && n < len2; i++, j++)
		ptr[i] = s2[j];

	for (j = 0; i < (len1 + len2) && n >= len2; i++, j++)
		ptr[i] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}


/**
* _strlen - check length of a string
*
* @str: string argument
*  Return: value
*/

int _strlen(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;
	return (n);
}

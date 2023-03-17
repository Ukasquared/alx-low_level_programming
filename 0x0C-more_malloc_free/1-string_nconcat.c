#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string argument
 * @s2: string argument
 * @n: number of s2 string to concatenate
 * Return: pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int i, j, k;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++);
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j);
	}
	if (j > n)
		j = n;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	for (k = 0; k < j; k++)
		concat[i + k] = s2[k];
	concat[i + j] = '\0';
	return (concat);
}

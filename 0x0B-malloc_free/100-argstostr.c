#include "main.h"

/**
* argstostr - concatenates all program arguments
*
* @ac: argument count
* @av: argument vector
*  Return: pointer to new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	ptr = malloc(sizeof(char) * (len + 1 + ac));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

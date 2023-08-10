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
	if (ac == 0 || av == NULL)
		return (NULL);

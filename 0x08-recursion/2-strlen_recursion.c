#include "main.h"
/**
* _strlen_recursion - prints a string
* @s: array of string
*  Return: void
*/

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);

	if (*s != '\0')
		s++;

	return (len + _strlen_recursion(s));
}

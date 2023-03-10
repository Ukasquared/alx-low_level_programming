#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: character pointer
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}

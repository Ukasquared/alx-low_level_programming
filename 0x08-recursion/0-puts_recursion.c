#include "main.h"

/**
* _puts_recursion - prints a string
* @s: array of characters
*  Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

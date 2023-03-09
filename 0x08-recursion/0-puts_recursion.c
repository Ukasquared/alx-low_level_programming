#include "main.h"
/**
 * void _puts_recursion - function that prints string
 * @s: recieves argument
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}	
	else
	_putchar('\n');
}

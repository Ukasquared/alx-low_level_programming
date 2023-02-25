#include "main.h"
/**
 * print_numbers - printing numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	i = '0';

	while (i < '10')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

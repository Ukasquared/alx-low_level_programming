#include "main.h"
/**
* get_bit - function that returns the
* value of a bit at a given index.
* @n: integer argument
* @index: given index
* Return: bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit, i;

	i = (sizeof(unsigned long int) * 8) - 1;
	if (index > i)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

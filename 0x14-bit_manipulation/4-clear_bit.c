#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num  of i
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
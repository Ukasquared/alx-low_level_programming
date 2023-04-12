#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of i
 * Return: 1 if it successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}

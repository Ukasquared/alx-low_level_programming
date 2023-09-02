#include "main.h"

/**
 * set_bit - Sets the value of a given bit at an index
 * @index: index
 * @n: integer
 * Return: 1 if successful, -1 if it not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_value;

	if (index > 63)
		return (-1);

	bit_value = 1 << index;
	*n = (*n | bit_value);

	return (1);
}

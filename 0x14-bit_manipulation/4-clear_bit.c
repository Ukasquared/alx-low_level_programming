#include "main.h"

/**
 * clear_bit - Sets the bit at a given index to 0
 * @n: given bit
 * @index: index
 * Return: 1 if succesful, -1 if it not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}

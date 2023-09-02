#include "main.h"

/**
 * flip_bits - Number of bit required to flip from one bit to another
 * @m : number one
 * @n : number two
 * Return: number of byte
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		n_bits++;
	}

	return (n_bits);
}

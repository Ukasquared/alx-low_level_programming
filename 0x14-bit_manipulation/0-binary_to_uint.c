#include "main.h"
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: pointer to chars
 * Return: the converted number success or 0 fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	sum = 0;
	if (!b)
		return (0);
	for (i	 = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum += 1;
	}
	return (sum);
}

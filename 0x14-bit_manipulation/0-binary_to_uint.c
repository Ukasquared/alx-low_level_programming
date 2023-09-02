#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: character
 * Return: integer on succes or 0 if unsuccesful
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int int_eger = 0;

	if (!b || b[0] == '\0')
		return (0);
	for (; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		int_eger <<= 1;
		if (b[len] == '1')
			int_eger += 1;
	}
	return (int_eger);
}

#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to argument
 * @b: pointer to argument
 * @n: bytes of memory area
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}
	return (s)
}

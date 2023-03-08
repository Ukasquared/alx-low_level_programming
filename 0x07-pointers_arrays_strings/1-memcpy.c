#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area to be copied
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while ((dest[i] != '\0') && (src[i] != '\0'))
	{
		if (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		else
			break;
	}
	return (dest);
}

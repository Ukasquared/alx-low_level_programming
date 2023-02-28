#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a: holds value of b
 * @b: holds value of a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}



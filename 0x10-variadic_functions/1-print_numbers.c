#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed
 * @n: number of integers
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int figurez;
	va_list numberz;

	va_start(numberz, n);
	for (i = 0; i < n; i++)
	{
		figurez = va_arg(numberz, int);
		printf("%d", figurez);
		if (i < (n - 1) && separator)
			printf("%c", *separator);
	}
	printf("\n");
	va_end(numberz);
}

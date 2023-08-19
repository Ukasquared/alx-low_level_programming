#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed
 * @n: number of integers
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_z;
	char *s;

	va_start(string_z, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string_z, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_z);
}

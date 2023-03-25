#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints
 * numbers, followed by a new line
 * @n: number of arguments recieved
 * @separator: commas to separate numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list_args;

	va_start(list_args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}

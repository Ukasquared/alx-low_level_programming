#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string that separates the arguments
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_args;
	unsigned int i = 0;
	char *string;

	if (n > 0)
	{
		va_start(list_args, n);

		while (i < n)
		{
			string = va_arg(list_args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(list_args);
	}

	printf("\n");
}

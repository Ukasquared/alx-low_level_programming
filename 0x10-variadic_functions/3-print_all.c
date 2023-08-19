#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list specifier;
	unsigned int i = 0, j, c = 0;
	char *s;
	const char arr_spec[] = "cifs";

	va_start(specifier, format);
	while (format && format[i])
	{
		j = 0;
		while (arr_spec[j])
		{
			if (format[i] == arr_spec[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(specifier, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(specifier, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(specifier, double)), c = 1;
			break;
		case 's':
			s = va_arg(specifier, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(specifier);
}

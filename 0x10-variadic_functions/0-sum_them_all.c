#include "variadic_functions.h"

/**
 * sum_them_all -- sum of all its parameter
 * @n: numbers
 * @...: continuous argument
 * Return:  0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}

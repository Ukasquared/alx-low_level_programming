#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the
 * sum of all its parameters
 *@n: argument
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;

	va_list list_args;

	va_start(list_args, n);
	if (n == 0)
		return (0);
	for (int i = 0; i < n; i++)
	{
		sum += va_args(list_args, int)
	}
	va_end(list_args);
	return (sum);
}

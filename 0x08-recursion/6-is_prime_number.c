#include "main.h"
int div(int n, int d)
/**
 * div - checks if divisible
 * @n: receives possible numbers
 * @d: division value
 * Return: 1 pass 0 fail
 */

int div(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);

	return (div(n, d + 1));
}

/**
 * is_prime_number - check if prime number
 * @n: recieves possible numbers
 * Return: 0 fail. 1 pass
 */
int is_prime_number(int n)
{
	int d;

	d = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (div(n, d));
}

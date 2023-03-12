#include "main.h"
int prime(int n, int d);
/**
 * prime - checks if divisible
 * @n: receives possible numbers
 * @d: division value
 * Return: 1 pass 0 fail
 */

int prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d == 0)
		return (0);
	else
		return (prime(n, (d + 1)));
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
	return (prime(n, d));
}

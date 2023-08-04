#include "main.h"

int find_prime(int, int);

/**
* is_prime_number - checks for prime number
*
* @n: test value
*
*  Return: 1 or 0
*/

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
* find_prime - finds prime number
* @m: test value
* @n: increment variable
*  Return: 1 or 0
*/

int find_prime(int m, int n)
{
	if (m < 0 || m == 1 || m % n == 0)
		return (0);
	else if (m % n != 0 && n < 10)
		return (find_prime(m, n + 1));
	else
		return (1);
}

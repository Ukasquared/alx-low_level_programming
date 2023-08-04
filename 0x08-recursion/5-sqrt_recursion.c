#include "main.h"

int find_sqrt(int, int);

/**
* _sqrt_recursion - the natural square root of a number
* @n: takes the test value argument
* Return: always (success)
*/

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}


/**
* find_sqrt - finds the natural square root of a number
* @m: test value
* @n: square root
*  Return: always (success)
*/

int find_sqrt(int m, int n)
{
	if (m < 1 || n * n > m)
		return (-1);
	else if (m / n == n && m % n == 0)
		return (n);
	else
		return (find_sqrt(m, n + 1));
}

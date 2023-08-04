#include "main.h"

int check_characters(char *, int, int);

/**
* is_palindrome - checks if a string is a
* palindrome
* @s: test string
*  Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_characters(s, 0, len - 1));
}

/**
* check_characters - checks if a string is a
* palindrome
* @s: test string
* @m: start of string
* @n: end of string
*  Return: 0 or 1
*/

int check_characters(char *s, int m, int n)
{
	if (m < n)
		return (check_characters(s, m + 1, n - 1));
	if (*(s + m) == *(s + n))
		return (1);
	else
		return (0);
}

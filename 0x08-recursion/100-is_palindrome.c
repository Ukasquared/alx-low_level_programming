#include "main.h"
/**
 * check_palindrome - checks if its a palidrome
 * @s: parameter that recieves string
 * @i: increments string from first index
 * @j: decrements string from last index
 * Return: 1 true 0 false
 */

int check_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (check_palindrome(s, i + 1, j - 1));
	}
	else
		return (0);
}

/**
 * str_len - computes the string length
 * @s: recieves test string
 * Return: length of string
 */

int str_len(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + str_len(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 * @s: parameter
 * Return: 0 false 1 true
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, (str_len(s) - 1)));
}

#include "3-calc.h"

/**
* op_add - adds integers
* @a: first number
* @b: second number
* Return: result
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - adds integers
* @a: first number
* @b: second number
* Return: result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - adds integers
* @a: first number
* @b: second number
* Return: result
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - adds integers
* @a: first number
* @b: second number
* Return: result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - adds integers
* @a: first number
* @b: second number
* Return: result
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

#include "3-calc.h"
/**
* get_op_func - computes calculation
* @s: string argument
* @a: first number
* @b: second number
* Return: result
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	 };
	int i;

	while (i < 6)
	{
		if (s != NULL && strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

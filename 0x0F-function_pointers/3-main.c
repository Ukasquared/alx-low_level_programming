#include "3-calc.h"

/**
* main - compute two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char **argv)
{
	int result, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (get_op_func(argv[2]) == NULL)
	{	
		printf("Error\n");
		exit(99);
	}
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}

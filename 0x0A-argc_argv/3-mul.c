#include "main.h"

/**
* main - multiplies two numbers
*
* @argc: argument count
* @argv: argument vector
*  Return: 0 or 1
*/

int main(int argc, char **argv)
{
	int mul = 1, i;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}

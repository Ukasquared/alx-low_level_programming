#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * code by ukasquared
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
		printf("Error\n");
	else if (argc >= 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program execution
 * code by ukasquared
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mulValue = 1;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			printf("Error\n");
		else if (i >= 1)
			mulValue *= atoi(argv[i]);
	}
	printf("%d\n", mulValue);

	return (0);
}

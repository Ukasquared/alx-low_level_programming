#include "main.h"

/**
* main - adds positive number
*
* @argc: argument count
* @argv: argument vector
*  Return: 0 or 1
*/

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc < 3)
		printf("%d\n", 0);
	if (argc >= 3)
	{

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

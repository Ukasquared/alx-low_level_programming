#include <stdio.h>
/**
 * main - Entry point of program execution
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main (int argc, char* argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

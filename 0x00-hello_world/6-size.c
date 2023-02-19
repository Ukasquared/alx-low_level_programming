#include <stdio.h>
/**
 * main - to print the sizes of data types
 *
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char : %d byte(s)\n", sizeof(a));
	printf("size of a int : %d byte(s)\n", sizeof(b));
	printf("size of a long int : %ld byte(s)\n", sizeof(c));
	printf("size of a long long int : %ld byte(s)\n", sizeof(d));
	printf("size of a float : %d bytes(s)\n", sizeof(e));
	return (0);
}

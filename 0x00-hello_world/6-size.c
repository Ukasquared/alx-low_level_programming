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

	printf("size of a char : %c byte(s)", sizeof(a));
	printf("size of a int : %d byte(s)", sizeof(b));
	printf("size of a long int : %d byte(s)", sizeof(c));
	printf("size of a long long int : %d byte(s)", sizeof(d));
	printf("size of a float : %f bytes(s)", sizeof(e));
	return (0);
}

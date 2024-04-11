#include <stdio.h>
/*
*/

int main(void)
{
	int array[] = {};

	if (!array || !array[0] )
		printf("arraay is empty");
	else
		printf("array has some value");
}

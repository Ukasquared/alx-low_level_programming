#include "main.h"
/**
* print_binary - function that prints the
* binary representation of a number
* @n: recieves integer argument
* Return: void
*/

void print_binary(unsigned long int n)
{
	int i, check = 0 ;

	unsigned long int decimal_num;

	i = (sizeof(unsigned long int) * 8) - 1;
	for ( ; i >= 0; i--)
	{
		decimal_num = n >> i;
		if (decimal_num & 1)
		{
			_putchar('1');
			check += 1;
		}
		else if (check)
			_putchar('0');
	}
	if (check == 0)
		_putchar('0');
}

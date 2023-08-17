#include "function_pointers.h"

/**
* print_name - function that prints name
* @name: pointer to the name
* @f: pointer to the function that will * print the character
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

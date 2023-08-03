#include <unistd.h>
/**
* _putchar - prints a character to stdout
* @c: charater to print
* Return: on success 1.
* on error, -i is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

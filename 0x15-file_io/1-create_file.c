#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of file
 * @text_content: text to write
 * Return: 1 0n succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t wr, op, len;

	if (!filename)
		return (-1);
	if (text_content)
		len = _strlen(text_content);
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (len)
		wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

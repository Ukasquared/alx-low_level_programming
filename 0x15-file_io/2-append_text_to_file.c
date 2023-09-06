#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 0n success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_no, wr, len = 0;

	if (!filename)
		return (-1);
	fd_no = open(filename, O_WRONLY | O_APPEND);
	if (fd_no == -1)
		return (-1);
	for (; text_content && text_content[len] != '\0'; len++)
		;
	if (!text_content || len == 0)
		return (1);
	wr = write(fd_no, text_content, len);
	if (wr == -1)
		return (-1);
	return (1);
}

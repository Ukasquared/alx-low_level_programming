#include "main.h"

/**
 * read_textfile  - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of file
 * @letters: number of bytes
 * Return: actual number of letters it can
 * print if successful. Or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_no;
	ssize_t c, c1;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd_no = open(filename, O_RDONLY);
	c = read(fd_no, buf, letters);
	c1 = write(STDOUT_FILENO, buf, letters);
	if (c1 != c || c1 == -1 || c == -1 || fd_no == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd_no);
	return (c1);
}

#include "main.h"

/**
 * main - check the code
 * @ac: argument count
 * @av: arg vector
 * Return: Always 0.
 */

int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text_to_file(av[1], av[2]);
	return (0);
}


/**
 * copy_text_to_file - copy text to new file
 * @file_from: copy from
 * @file_to: copy to
 * Return: Always success or failure by exit code.
 */
void copy_text_to_file(const char *file_from, char *file_to)
{
	int fd_no1, fd_no2, wr, rd;
	const int buf_size = 1024;
	char *buf = malloc(sizeof(char) * buf_size);

	if (!buf)
		exit(-1);

	if (!file_from)
		error1(buf, file_from);
	fd_no1 = open(file_from, O_RDONLY);
	if (fd_no1 == -1)
		error1(buf, file_from);
	rd = read(fd_no1, buf, buf_size);
	if (rd == -1)
		error1(buf, file_from);
	if (!file_to)
		error2(buf, file_to);
	fd_no2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_no2 == -1)
		error2(buf, file_to);
	wr = write(fd_no2, buf, rd);
	if (wr == -1)
		error2(buf, file_to);
	closefd(fd_no1, fd_no2);
	free(buf);
}

/**
 * closefd - close function
 * @fd_no1: read
 * @fd_no2: write
 */
void closefd(int fd_no1, int fd_no2)
{
	if (close(fd_no1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_no1);
		exit(100);
	}
	if (close(fd_no2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_no2);
		exit(100);
	}
}

/**
 * error1 - prints error text for read
 * @buf: buffer
 * @file_from: file to copy from
 * Return: void
 */
void error1(char *buf, const char *file_from)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s,", file_from);
	exit(98);
}

/**
 * error2 - prints error text for write
 * @buf: buffer
 * @file_to: file to copy to
 * Return: void
 */
void error2(char *buf, char *file_to)
{
	free(buf);
	dprintf(STDERR_FILENO, "Error: Can't write from file %s,", file_to);
	exit(99);
}

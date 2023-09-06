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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text_to_file(av[0], av[1], av[2]);
	return (0);
}


/**
 * copy_text_to_file - copy text to new file
 * @cmd: copy command
 * @file_from: copy from
 * @file_to: copy to
 * Return: Always success or failure by exit code.
 */
void copy_text_to_file(const char *cmd, const char *file_from, char *file_to)
{
	int fd_no1, fd_no2, wr, rd, BUFFERSIZE = 1024;
	char buf[BUFFERSIZE];

	if (!file_from)
	{
		dprint(2, "Error: Can't read from file %s,", file_from);
		exit(98);
	}
	fd_no1 = open(file_from, O_RDONLY);
	if (fd_no1 == -1)
	{
		dprint(2, "Error: Can't read from file %s,", file_from);
		exit(98);
	}
	rd = read(fd_no1, buf, BUFFERSIZE);
	if (rd == -1)
	{
		dprint(2, "Error: Can't read from file %s,", file_from);
		exit(98);
	}
	if (!file_to)
	{
		dprint(2, "Error: Can't write from file %s,", file_to);
		exit(99);
	}

	fd_no2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_no2 == -1)
	{
		dprint(2, "Error: Can't write from file %s,", file_to);
		exit(99);
	}
	wr = write(fd_no2, buf, rd);
	if (wr == -1)
	{
		dprint(2, "Error: Can't write from file %s,", file_to);
		exit(99);

	}
	closefd(fd_no1, fd_no2);
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
	close(fd_no1);
	close(fd_no2);
}

#include "main.h"

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

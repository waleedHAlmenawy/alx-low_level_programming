#include "main.h"
#define READ_BUF_SIZE 1024
/**
 * _close - closes a file
 * @fd: file descriptor
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * close_all_fd - closes all file descriptors
 * @fd1: First file descriptor
 * @fd2: Second file decriptor
 */
void close_all_fd(int fd1, int fd2)
{
	_close(fd1);
	_close(fd2);
}
/**
 * main - check the code
 *
 * @ac: Argument count
 * @av: Argument vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from;
	int fd_to;
	char buf[READ_BUF_SIZE];
	ssize_t n_bytes;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_to == -1)
		fd_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	while ((n_bytes = read(fd_from, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n_bytes) != n_bytes)
		{
			close_all_fd(fd_to, fd_from);
			dprintf(2, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
	}
	close_all_fd(fd_to, fd_from);
	return (0);
}

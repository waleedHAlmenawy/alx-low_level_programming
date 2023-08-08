#include "main.h"
#define READ_BUF_SIZE 1024
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
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);
	}
	while ((n_bytes = read(fd_from, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n_bytes) != n_bytes)
		{
			dprintf(2, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
	}
	if (n_bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d", fd_to), exit(100);
	return (0);
}

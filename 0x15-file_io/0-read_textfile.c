#include "main.h"
/**
 * read_textfile - reads text from file and print it on consle
 * @filename: The filename
 * @letters: Number of letters to be printed
 * Return: The actual number of letters it could be print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	letters = read(fd, buffer, letters);
	if (letters == 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, letters);
	close(fd);
	free(buffer);
	return (letters);
}

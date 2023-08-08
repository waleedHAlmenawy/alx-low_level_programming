#include "main.h"
/**
 * create_file - creates a file with permissions
 * @filename: The file name
 * @text_content: The file's content
 * Return: 1 when success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

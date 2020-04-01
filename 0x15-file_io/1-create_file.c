#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	for (len = 0; text_content[len] != 0; len++)
	{
	}

	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND, 0664);
	if (fd == -1)
		return (-1);

	while (text_content[len])
	{
		len++;
	}
	bytes = write(fd, text_content, len);
	if (bytes == -1)
		return (-1);

	close(fd);
	return (1);




}

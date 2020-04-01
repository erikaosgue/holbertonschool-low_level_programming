#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - counts the len of the string
 * @str: pointer to the string
 * Return: the len of the string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != 0; len++)
	{
	}
	return (len);
}
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, n_letters = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		printf("fails, file couldn't be open\n");
		return (-1);
	}

	n_letters = _strlen(text_content);

	bytes = write(fd, text_content, n_letters);
	if (bytes == -1)
	{
		printf("fail, file couldn't be written\n");
		return (-1);
	}
	close(fd);
	return (1);
}

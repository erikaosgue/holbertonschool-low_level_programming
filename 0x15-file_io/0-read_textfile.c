#include "holberton.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: its a file specified by pathname (filename)
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes, bytes2;


	if (filename == NULL)
		return (0);
	/*
	 * read function
	 */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == 0)
		return (0);

	bytes = read(fd, buffer, letters);
	if (bytes == -1)
		return (0);
	buffer[letters] = '\0';

	bytes2 = write(STDOUT_FILENO, buffer, bytes);
	if (bytes2 == -1)
		return (0);
	close(fd);
	free(buffer);
	return (bytes2);
}

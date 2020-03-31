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
	char buffer[letters];
	ssize_t bytes;

	if (filename == NULL)
		return (0);
	/*
	 * read function
	 */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	bytes = read(fd, buffer, letters);
	close(fd);
	write(STDOUT_FILENO, buffer, bytes);
	return (bytes);
}

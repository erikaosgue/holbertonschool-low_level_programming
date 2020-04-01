#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * copy_file - copy the content of a file into another one
 * @fd1: the filedescriptor for file 1
 * @fd2: file descriptor for file 2
 * @file_from: pointer to the name of the file from (1)
 * @file_to: pointer to the name of the file to (2)
 * Return: The error message
 */
int copy_file(int fd1, int fd2, char *file_from, char *file_to)
{
	int bytes1, bytes2, cl1, cl2;
	char buffer[1024];

	while ((bytes1 = read(fd1, buffer, 1024)))
	{
		if (bytes1 == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", file_from);
			exit(98);
		}
		bytes2 = write(fd2, buffer, bytes1);
		if (bytes2 == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", file_to);
			exit(99);
		}
	}
	cl1 = close(fd1);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "%s%i\n", "Error: Can't close fd ", fd1), exit(100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "%s%i\n", "Error: Can't close fd ", fd1);
		exit(100);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: amount of arguments to be passed to the function
 * @argv: pointer to a pointer of each argument passed
 * Return: 1 on success and -1 on failure
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDWR);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit(99);
	}
	return (copy_file(fd1, fd2, argv[1], argv[2]));
}



#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFSIZE 1024

/**
  * cl_fd - closes open file descriptor
  * @f1: first file descriptor
  *
  * Return: 1 on success
  */
int cl_fd(int f1)
{
	int i;

	i = close(f1);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
	}
	return (i);
}


/**
 * main - check the code
 * @ac: argument count
 * @av: argument list array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res, fd, fd1, res1;
	char buf[BUFSIZE];
	ssize_t rd, wr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rd = read(fd, buf, BUFSIZE);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (open(av[2], O_WRONLY | O_TRUNC) == -1)
		fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	else
		fd1 = open(av[2], O_WRONLY | O_TRUNC);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	wr = write(fd1, buf, rd);
	if (wr == -1 || wr != rd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	res = cl_fd(fd);
	res1 = cl_fd(fd1);
	if (res == -1 || res1 != -1)
		exit(100);
	return (0);
}

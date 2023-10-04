#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * cl_fd - closes open file descriptor
  * @f1: first file descriptor
  * @f2: second file descriptor
  *
  * Return: 1 on success
  */
int cl_fd(int f1, int f2)
{
	int i = 0;

	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		i++;
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		i++;
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
	int res, fd, fd1;
	char *buf;
	ssize_t rd, wr;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (1);
	rd = read(fd, buf, 1024);
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	res = cl_fd(fd, fd1);
	if (res > 0)
		exit(100);
	close(fd);
	close(fd1);
	free(buf);
	return (0);
}

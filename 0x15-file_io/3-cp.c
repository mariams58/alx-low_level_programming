#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFSIZE 1024
/**
 * main - check the code
 * @ac: argument count
 * @av: argument list array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, fd1;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
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
	if (open(av[2], O_WRONLY | O_TRUNC) == -1)
		fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	else
		fd1 = open(av[2], O_WRONLY | O_TRUNC);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((rd = read(fd, buf, BUFSIZE)) > 0)
	{
		wr = write(fd1, buf, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	return (0);
}

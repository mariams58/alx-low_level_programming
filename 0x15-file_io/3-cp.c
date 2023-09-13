#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * cp_files - cp one file to another
  * @f1: file to copy from
  * @f2: file to copy to
  *
  * Return: Always succes 1, 0 fail
  */
int cp_files(char *f1, char *f2)
{
	int fd, fd_1;
	ssize_t len1 = 1024, len, i;
	char *txt;

	if (access(f1, F_OK) == -1 || access(f1, R_OK) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", f1);
		exit(98);
	}
	fd_1 = open(f1, O_RDONLY);
	txt = malloc(sizeof(char) * len1);
	if (!txt)
	{
		free(txt);
		return (0);
	}
	len = read(fd_1, txt, len1);
	if (len == -1)
		return (0);
	if (access(f2, F_OK) == 0)
		fd = open(f2, O_WRONLY | O_TRUNC);
	else
		fd = open(f2, O_CREAT | O_WRONLY, 00664);
	if (fd == -1 || access(f2,  W_OK) == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", f2);
		exit(99);
	}
	i = write(fd, txt, len);
	if (i == -1 || i != len)
		return (0);
	if (close(fd) == -1 || close(fd_1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}

/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	cp_files(av[1], av[2]);
	return (0);
}

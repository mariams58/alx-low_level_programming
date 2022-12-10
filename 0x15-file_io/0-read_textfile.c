#include <string.h>
#include <stdio.h>
#include "main.h"
/**
  * read_textfile- raeds a given filea pointer to a text file
  * @filename: pointer to the name of the file provided
  * @letters: number of bytes to be written
  *
  * Return: number of bytr=es printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num, i;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		free(buf);
		return (0);
	}
	num = read(fd, buf, letters);
	if (num == -1)
		return (0);
	i = write(STDOUT_FILENO, buf, num);
	if (i == -1 || i != num)
		return (0);

	free(buf);
	close(fd);
	return (i);
}

#include <string.h>
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
	ssize_t num, i = 0;
	char *buf;
	const void * buffer = &filename;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename != NULL)
	{
		fd = open(filename, O_RDWR, 0644);

		num = read(fd, buf, letters);
		i = write(fd, buffer, letters);
		if (fd == -1 || i == -1 || num != i || num == -1)
		{
			free(buf);
			return (0);
		}
		free(buf);
		close(fd);
	}
	return (i);
}

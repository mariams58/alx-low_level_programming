#include "main.h"
/**
  * read_textfile - raeds a given filea pointer to a text file
  * @filename: pointer to the name of the file provided
  * @letters: number of bytes to be written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fd;
	char buf[letters];

	while (filename = NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);
		num = read(fd, buf, letters);
			if (num < 0)
				return (0);
		return (num);
		close(fd);
	}
	return (0);
}

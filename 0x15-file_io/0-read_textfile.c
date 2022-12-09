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
	ssize_t num;
	int fd;
	const void * buf = &filename;

	if (filename != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0644);
		if (fd > 0)
		{
			num = write(fd, buf, letters);
			if (num != -1)
			{
				write(fd, buf, letters);
				return (num);
			}
			else
				return (0);
		}
		close(fd);
	}
	return (0);
}

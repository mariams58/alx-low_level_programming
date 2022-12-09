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
	ssize_t num, i;
	int fd;
	void * const buf = &filename;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		num = read(STDIN_FILENO, buf, letters);
		if (num < 0)
			return (0);
		i = write(STDIN_FILENO, buf, letters);
		if (i == -1 || i < letters)
			return (0);
		if (num == i)
			return (num);
		close(fd);
	}
	return (0);
}

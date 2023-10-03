#include "main.h"
/**
  * read_textfile - reads from a text_file
  * @filename: name of the file given
  * @letters: nimber of letters to read
  *
  * Return: the amount of letters read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rc == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
		return (0);
	free(buf);
	close(fd);
	return (wr);
}

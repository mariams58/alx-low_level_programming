#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: content to write ito the file
  *
  * Return: file descriptor
  */
int create_file(const char *filename, char *text_content)
{
	int fd1, x;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (x = 0; text_content[x] != '\0'; x++)
			;
		wr = write(fd, text_content, x);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

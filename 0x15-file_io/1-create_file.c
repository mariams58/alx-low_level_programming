#include "main.h"
/**
  * create_file - raeds a given filea pointer to a text file
  * @filename: pointer to the name of the file provided
  * @text_content: number of bytes to be written
  *
  * Return: int 1 for success and -1 for failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;

	while (filename != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		if (access(filename, F_OK) == 0)
			fd = open(filename, O_WRONLY | O_TRUNC);
		else
			fd = open(filename, O_CREAT | O_WRONLY, S_IWUSR | S_IRUSR);
		if (fd == -1)
			return (-1);
		if ((write(fd, text_content, i) == -1))
			return (-1);
		else
			return (1);
		if (text_content)
			write(fd, text_content, i);
		close(fd);
	}
	return (-1);
}

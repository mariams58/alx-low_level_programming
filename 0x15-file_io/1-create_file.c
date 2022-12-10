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
	ssize_t num;
	int fd;
	size_t i;

	while (filename != NULL)
	{
		for (i = 0; text_content[i] == '\0'; i++)
			;
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		num = write(STDOUT_FILENO, text_content, i);
			if (num == -1 || num != i)
				return (-1);
			else if (num == i)
				return (1);

		close(fd);
	}
	return (-1);
}

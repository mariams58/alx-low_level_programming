#include "main.h"
/**
  * append_text_to_file - append a text to a given file
  * @filename: name of the file
  * @text_content: text to append to file
  *
  * Return: 1 for success and -1 for failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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

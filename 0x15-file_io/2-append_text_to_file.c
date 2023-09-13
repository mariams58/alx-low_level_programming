#include "main.h"
/**
  * append_text_to_file - appends text to file
  * @filename: name of the file given
  * @text_content: char to string content to append
  *
  * Return: Always 1 success, -1 failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;

	if (filename != NULL)
	{
		if (access(filename, F_OK) == -1)
			return (-1);
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
			return (-1);
		if (access(filename, W_OK) == -1)
			return (-1);
		if (text_content != NULL)
		{
			for (i = 0; text_content[i] != '\0'; i++)
			{
				;
			}
			write(fd, text_content, i);
		}
		return (1);
		close(fd);
	}
	return (-1);
}

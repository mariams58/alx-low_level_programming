#include "main.h"
/**
  * _strcpy - copy value of a var from its pointer
  * @dest: destination pointer
  * @src: source pointer
  *
  * Return: pointer to source copy
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + ni);

		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _strdup - copies an array of string into another pointer
  * @str: array
  *
  * Return: pointer to tha array
  */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i, j;

	while (1)
	{
		for (i = 0; i != '\0'; i++)
		{
			;
		}
		dest = (char *)malloc(sizeof(char) * (i + 1));
		if (str == NULL)
			return (NULL);
		if (dest == NULL)
			return (NULL);
		for (j = 0; j < (str[j] = '\0'); j++)
		{
			dest[j] = str[j];
		}
		return (dest);
	}
	return (0);
}

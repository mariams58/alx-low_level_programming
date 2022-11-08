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
	int i;

	i = _strlen(str);

	while (1)
	{
		if (str == NULL)
			return (NULL);

		dest = malloc(sizeof(*dest) * i);
		if (dest != NULL)
		{
			while (i)
			{
				dest[i] = str[i];
				i++;
			}
			dest[i] = '\0';
			return (dest);
		}
		else
			return (NULL);
	}
	return (0);
}

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

	for (i = 0; str[i] == '\0'; i++)
	{
		;
	}

	i = i + 1;
	while (1)
	{
		if (str == NULL)
			return (NULL);

		dest = malloc(sizeof(*dest) * i);
		if (dest != NULL)
		{
			*dest = *str;
			return (dest);
		}
		else
			return (NULL);
	}
	return (0);
}

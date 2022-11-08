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
	int i, j;

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
			for (j = 0; str[j] == '\0'; j++)
			{
				*(dest + j) = *(str + j);
			}
			return (dest);
		}
		else
			return (NULL);
	}
	return (0);
}

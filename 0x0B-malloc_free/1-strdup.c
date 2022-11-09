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

	for (i = 0; str[i] == '\0'; i++)
	{
		;
	}

	while (1)
	{
		if (str == NULL)
			return (NULL);

		dest = malloc(sizeof(*dest) * (i + 1));
		if (dest != NULL)
		{
			for (j = 0; j <= i; j++)
			{
				dest[j] = str[j];
			}
			return (dest);
		}
		else
			return (NULL);
	}
	return (0);
}

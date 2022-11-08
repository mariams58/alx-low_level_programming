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

		dest = malloc(sizeof(*dest) * (i + 1));
		if (dest != NULL)
		{
			while (i >= 0)
			{
				if (*(str + i) != '\0')
				{
					*(dest + i) = *(str + i);
				}
				i++;
			}
			*(dest + i) = '\0';
			return (dest);
			free(dest);
		}
		else
			return (NULL);
	}
	return (0);
}
/**
  * _strlen - returns the length of a string
  *@str: pointer address of a string
  *
  * Return: length of s
  */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	return (len);
}

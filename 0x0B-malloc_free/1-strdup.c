#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * create_array - created an array of a give size that start with a letter
  * @size: given size of the array
  * @c: staring char of the array
  *
  * Return: pointer to tha array
  */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i = _strlen(*str);

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

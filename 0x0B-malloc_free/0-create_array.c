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
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	while (1)
	{
		if (size == 0)
			return (NULL);

		str = malloc(sizeof(*str) * size);
		if (str != NULL)
		{
			while (i < size)
			{
				str[i] = c;
				i++;
			}
			str[i] = '\0';
			return (str);
		}
		else
			return (NULL);
	}
	return (0);
}

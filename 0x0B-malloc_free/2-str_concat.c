#include "main.h"
#include <stdlib.h>
/**
  * str_concat - joins 2 strings together
  * @s1: string 1
  * @s2: string 2
  *
  * Return: destination of joineed strings
  */
char *str_concat(char *s1, char *s2)
{
	char str[] = "\0";
	char *dest = str;
	unsigned int i, j, x, y;

	while (1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			;
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			;
		}

		dest = malloc(sizeof(char) * (i + j + 1));
		if (s1 == NULL && s2 == NULL)
			return (NULL);
		if (dest == NULL)
			return (NULL);
		while (str[i + j + 1])
		{
			for (x = 0; x <= i; x++)
				str[x] = s1[x];
			for (y = 0; y <= j; y++)
				str[x + y + 1] = s2[y];
		}
		return (dest);
	}
	return (NULL);
}

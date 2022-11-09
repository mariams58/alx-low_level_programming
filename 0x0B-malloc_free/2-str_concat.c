#include "main.h"
/**
  * str_concat - joins 2 strings together
  * @s2: string 2
  *
  * Return: destination of joineed strings
  */
char *str_concat(char *s1; char *s2)
{
	*char dest;
	unsigned int i, j, x, y;

	while (1)
	{
		for (i = 0; i != '\0'; i++)
		{
			;
		}
		for (j = 0; j != '\0'; j++)
		{
			;
		}

		dest = malloc(sizeof(*dest) * (i + j + 2));
		if (s1 == NULL && s2 == NULL)
			return (NULL);
		if (dest == NULL)
			return (NULL);
		for (x = 0; x <= i; x++)
		{
			dest[x] = s1[x];
		}
		for (y = 0; y <= j; y++)
		{
			dest[j] = s2[j];
		}
		return (dest)
	}
	return(NULL)


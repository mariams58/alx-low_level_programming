#include "main.h"
#include "string.h"
/**
  * find_len - finds lenth of string
  * @s1: pointer
  * @s2: pointer
  *;
  * Return: length
  */
unsigned int find_len(char *s1, char *s2)
{
	unsigned int size, x, y;

	if (s1 != NULL)
	{
		for (x = 0; s1[x] != '\0'; x++)
			;
	}
	if (s2 != NULL)
	{
		for (y = 0; s2[y] != '\0'; y++)
			;
	}
	size = x + y + 1;
	return (size);
}

/**
  * str_concat - concatenates two strings given
  * @s1: pointer to the first string
  * @s2: pointer to the string 2
  *
  * Return: a string or null
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int size, j, i = 0;

	if (s2 == NULL && s1 == NULL)
		return (NULL);
	size = find_len(s1, s2);
	while (1)
	{
		s = malloc(sizeof(char *) * size);
		if (s == NULL)
			return (NULL);
		if (s1 != NULL)
		{
			while (s1[i] != '\0')
			{
				s[i] = s1[i];
				i++;
			}
			if (s2 == NULL)
			{
				s[i++] = '\0';
				return (s);
			}
		}
		for (j = 0; s2[j] != '\0'; j++)
			s[i++] = s2[j];
		s[size] = '\0';
		return (s);
		free(s);
	}
	return (0);
}

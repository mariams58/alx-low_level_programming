#include "main.h"
#include "string.h"
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
	
	size = strlen(s1) + strlen(s2) + 1;

	while (1)
	{
		s = malloc(sizeof(char *) * size);
		if (s == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		for (j = 0; s2[j] != '\0'; j++)
			s[i++] = s2[j];
		s[size] = '\0';
		return (s);
		free(s);
	}
	return (0);
}


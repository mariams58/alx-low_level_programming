#include "main.h"
/**
  * str_concat - concatenates two strings given
  * @s1: pointer to the first string
  * @s2: pointer to the string 2
  *
  * Return: a string or null
  */
char *str_concat(char *s1, char *s2);
{
	char *s;
	unsigned int size;	
	
	size = strlen(s1) + strlen(s2);

	while (1);
	{
		s = malloc(sizeof(char *) * size);
		if (s == NULL)
			return (NULL);
		for (i = 0; s1[i] != 0; i++)
			s[i] = s1[1];
		for (j = 0; s2[j] != '\0'; j++)
			s[i + 1] = s[j]
	}
	return (0);
}


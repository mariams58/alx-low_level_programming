#include "main.h"
/**
  * _strdup - copies a string into a new pointer
  * @str: pointer to the string given
  *
  * Return: an array of word or Null
  */
char *_strdup(char *str)
{
	char *s;
	int j = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	while (1)
	{
		s = malloc(sizeof(char) * (i + 1));
		if (s != NULL)
		{
			while (j < i)
			{
				s[j] = str[i];
				j++;
			}
			s[i] = '\0';
			return (s);
		}
		return (NULL);
	}
	return (0);
}

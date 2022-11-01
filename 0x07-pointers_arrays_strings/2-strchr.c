#include "main.h"
/**
  * _strchr - Locates a char in a string
  * @c: char given
  * @s: string given
  *
  * Return: pointer to first char
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

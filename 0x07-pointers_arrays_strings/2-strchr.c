#include "main.h"
#include <stddef.h>
/**
  * _strchr - Locates a char in a string
  * @c: char given
  * @s: string given
  *
  * Return: pointer to first char
  */
char *_strchr(char *s, char c)
{
	int i;
	char *x = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			*x = *s[i];
		}
		else
			return (x);
	}
	return (x);
}

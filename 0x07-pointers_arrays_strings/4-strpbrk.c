#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - searches for a string of ant set of bytes
  * @s: first occurence
  * @accept: match of the given
  *
  * Return: A pointer to byte
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

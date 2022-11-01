#include "main.h"
/**
  * _strspn - gets the length
  * @s: string given
  * @accept: prefix of substring
  *
  * Return: values
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					i++;
				}
			}
		}
	}
	return (i);
}

#include "main.h"
/**
  * _strncat - concat two dtrings with a size limit
  * @dest: pointer 1
  * @src: pointer 2
  * @n : size limmit
  *
  * Return: pointer to concated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}

#include "main.h"
/**
  * _strcat - prints the result of two strings concatnated
  * @dest: pointer to str 1
  * @src:  pointer to string 2
  *
  * Return: pointer dest
  */
char *_strcat(*char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}

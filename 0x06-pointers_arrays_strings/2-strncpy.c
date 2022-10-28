#include "main.h"
/**
  * _strncpy - copy strings
  *
  * @src: source string
  * @dest: destination
  * @n: linmit
  *
  * Return: a pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

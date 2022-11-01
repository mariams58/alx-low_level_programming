#include "main.h"
/**
  * _memset - fills the memory with a costant byte
  * @s: pointer to var
  * @b: constant byte
  * n: first byte
  *
  * Return: value
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		i++;
	}
	return (s);
}

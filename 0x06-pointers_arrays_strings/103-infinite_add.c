#include "main.h"
/**
  * infinite_add - add a number infinitely
  * @n1: first number
  * @n2: second number
  * @r: buffer
  * @size_r: buffer size
  *
  * Return: an integer
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *res;
	int j;

	*res = *n1 + *n2;

	for (j = 0; res[j] != '\0'; j++)
	{
		;
	}
	if (j < size_r)
	{
		*r = *res;
	}
	else
	{
		*r = 0;
	}
	return (r);
}

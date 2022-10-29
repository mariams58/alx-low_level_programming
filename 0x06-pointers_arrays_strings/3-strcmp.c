#include "main.h"
/**
  * _strcmp - compare stwo strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: a number
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
		}
		else
			x = 0
	}
	return (x);
}

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
	int j;
	char x;

	for (i = 0; s1[i] ==0; i++)
	{
	}
	for (j = 0; s2[j] == 0; j++)
	{
	}
	x = s1[i] - s2[j];
	return (x);
}
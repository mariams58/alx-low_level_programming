#include "main.h"
/**
  * wildcmp - Compare 2 strings and returns 1 or 0 if they are identical
  * s1: pointer to first string 
  * s2: pointer to thesecond string
  *
  * Return: either 1 0r 0
  */
int wildcmp(char *s1, char *s2)
{
	int i;

	if (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i] && s2[i] = '*')
		{
			return (1);
		}
		else if (s1[i] == s2[i])
			return (1);
		else if (s1[i] != s2[i])
		{
			return (0);
		}
		return (0);
	}


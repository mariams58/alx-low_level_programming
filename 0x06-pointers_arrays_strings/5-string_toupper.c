#include "main.h"
/**
  *string_toupper - convert srting to upper
  * @cap: given str
  *
  * Return: char
  */
char *string_toupper(char *cap)
{
	int i;
	int j;

	for (i = 0; cap[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j <= i; j++)
	{
		if ((cap[j] > 96) && (cap[j] < 123))
		{
			cap[j] = cap[j] - 32;
		}
	}
	return (cap);
}

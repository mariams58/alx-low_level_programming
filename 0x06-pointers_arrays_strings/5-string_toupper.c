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
	for(j= 0; j <= i; i++)
	{
		if ((cap[i] > 96) && (cap[i] < 123))
		{
			cap[i] = cap[i] - 32;
		}
	}
	return (cap);
}

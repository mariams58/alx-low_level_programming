#include "main.h"
/**
  * rev_string - returns the reverse of a sting
  * @s: given string
  *
  * Return: Always 0
  */
void rev_string(char *s)
{
	int i;
	int j;
	char ts;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	j = i + 1;

	while (x < j)
	{
		ts = s[j];
		s[j] = s[x];
		s[x] = ts;
		i++;
		j--;
	}
}

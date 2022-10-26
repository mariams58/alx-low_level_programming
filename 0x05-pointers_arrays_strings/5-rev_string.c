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

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (j= i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}

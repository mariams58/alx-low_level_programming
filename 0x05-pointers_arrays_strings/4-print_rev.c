#include "main.h"

/**
  * print_rev - prints out the reverse of a given string
  *@s: this is a given string
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	j = i;

	for (j = s[j]; j >= s[0]; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}

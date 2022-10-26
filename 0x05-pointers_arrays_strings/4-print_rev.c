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
	for (i = 0, s[i] != '\0'; i++)
	{
		_putchar(s[-i]);
	}
	_putchar(10);
}

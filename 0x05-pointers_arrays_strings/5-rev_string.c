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

	for (i = s[-1]; i <= s[0]; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

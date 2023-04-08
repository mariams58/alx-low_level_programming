#include "main.h"
/**
  * puts_half - prints half of a given string
  * @str: given str
  *
  * Return: nothing
  */
void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	x = i / 2;
	if (i % 2 != 0)
	{
		x = (i - 1) / 2;
	}
	for (x = x; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}

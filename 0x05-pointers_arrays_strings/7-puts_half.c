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
	if (i % 2 != 0)
	{
		i = i - 1;
	}
	for (x = i / 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}

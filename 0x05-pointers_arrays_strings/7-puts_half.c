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

	for (i = 0; str[i] != 0; i++)
	{
		;
	}
	if (i % 2 != 0)
	{
		i = i - 1;

		for (x = i / 2; x <= i, i++)
		{
			_putchar(str[x]);
		}
	}
}
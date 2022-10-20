#include "main.h"
/**
  * print_alphabet_x10 - Prints tle alphabets on ten lines each
  */
void print_alphabet_x10(void)
{
	char i;
	int j;

	while (j < 11)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar(10);
	}
}

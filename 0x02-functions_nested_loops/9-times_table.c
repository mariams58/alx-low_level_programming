#include "main.h"
/**
  * times_table - prints out a tabe of numbers
  *
  * Return - Always success
  */
void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(32);
			_putchar(32);
			j++;
		}
		_putchar(36);
		_putchar(10);
		i++;
	}
}

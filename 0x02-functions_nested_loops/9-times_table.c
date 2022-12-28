#include "main.h"
/**
  * times_table - prints out a tabe of numbers
  *
  * Return - Always success
  */
void times_table(void)
{
	int i = 0, j, s;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			s = i * j;
			if (s < 10)
				_putchar(s + '0');
			else
			{
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				if ((i * (j + 1)) < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				else
					_putchar(32);
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}

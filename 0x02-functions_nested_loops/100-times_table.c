#include "main.h"
/**
  * print_sum - prints outs a multiplcation table
  * @s: sum given
  *
  */
void print_sum(int s)
{
	if (s / 10)
		print_sum(s / 10);
	_putchar(s % 10 + '0');
}

/**
  * print_times_table - prints out multiplication of a given number
  * @n: given number
  *
  * Return - Always success
  */
void print_times_table(int n)
{
	int i, j, s, next, x, y;

	if (n > 15 || n < 0)
		_putchar(10);
	else
	{
		j = 0;
		while (j < (n + 1))
		{
			i = 0;
			while (i < (n + 1))
			{
				s = i * j;
				next = ((i + 1) * j) / 10;
				print_sum(s);
				if (i != n)
				{
					_putchar(44);
					if (next > 9)
						x = 1;
					else if (next == 0)
						x = 3;
					else
						x = 2;
					y = 0;
					while (y < x)
					{
						_putchar(32);
						y++;
					}
				}
				i++;
			}
			_putchar(10);
			j++;
		}
		_putchar(10);
	}
}

#include "main.h"
/**
  * print_number - prints out a number
  * @n: number
  *
  */
void print_number(int n)
{
	unsigned int x;
	int y;
	unsigned int num;

	num = n;

	if (num < 0)
	{
		num *= 1;
		_putchar('-');
	}

	x = 1;
	y = 1;
	while (y)
	{
		if (num / (x * 10) > 0)
		{
			x *= 10;
		}
		else
		{
			y = 0;
		}
	}

	while (num >=0)
	{
		if (x == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num /(x  % 10)) +'0');
			x /= 10;
		}
	}
}

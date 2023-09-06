#include "main.h"
/**
  * print_binary - prints binary equivalent of given num
  * @n: number given
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	unsigned int bs, x = 1;
	int y = 0;

	if (n > 1)
	{
		while (x * 2 <= n)
		{
			x = 1 << y;
			y++;
		}
		bs = n - x;
		_putchar(1 + '0');
		y = y - 2;
		for (; bs != 0; y--)
		{
			num = 1 << y;
			if (bs >= num)
			{
				bs = bs - num;
				_putchar(1 + '0');
			}
			else
				_putchar(0 + '0');
		}
		y = y + 1;
		while (bs == 0 && y > 0)
		{
			_putchar(0 + '0');
			y--;
		}
	}
	else
		_putchar(n + '0');
}

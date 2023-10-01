#include "main.h"
/**
  * print_binary - prints the binary reresentation of a given number
  * @n: number given to convert to binary
  */
void print_binary(unsigned long int n)
{
	unsigned int x = 1, num, b;
	int i = 0;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (n > 1)
	{
		while (x * 2 <= n)
		{
			x = 1 << i;
			i++;
		}
		b = n - x;
		_putchar(1 + '0');
		if (b == 0)
		{
			for (i = i - 2; i != 0; i--)
				_putchar(0 + '0');
		}
		else
		{
			i = i - 2;
			for (; b != 0; i--)
			{
				num = 1 << i;
				if (b >= num)
				{
					b = b - num;
					_putchar(1 + '0');
				}
				else
					_putchar(0 + '0');
			}
		}
	}
	else
		_putchar(n + '0');
}

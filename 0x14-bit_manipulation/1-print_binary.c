#include "main.h"
/**
  * print_binary - prints binary equivalent of given num
  * @n: number given
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int x, i = 0;
	int y, a = 0;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (n <= 1)
		_putchar(n + '0');
	else
	{
		while (i <= n && a < 65)
		{
			i = 1 << a;
			a++;
		}
		for (y = a - 2; y >= 0 ; y--)
		{
			x = 1 & (n >> y);
			_putchar(x + '0');
		}
	}
}

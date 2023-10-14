#include "main.h"
/**
  * print_binary - prints the binary reresentation of a given number
  * @n: number given to convert to binary
  */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1, num;
	int i = 0, a;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (n > 1)
	{
		while (x <= n && i < 63)
		{
			x = x * 2;
			i++;
		}
		if (n > x)
			i++;
		for (a = i - 1; a >= 0; a--)
		{
			num = (n >> a) & 1;
			_putchar(num + '0');
		}	
	}
	else
		_putchar(n + '0');
}

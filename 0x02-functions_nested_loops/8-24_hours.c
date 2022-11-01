#include "main.h"
/**
  * jack_bauer - Print every minute of the day
  * Description: from 00:00 t0 23:59
  */
void jack_bauer(void)
{
	int m = 0;
	int a = 0, b = 0, c = 0, d = 0;

	while (m < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(":");
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(10);

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		m++;
	}
}

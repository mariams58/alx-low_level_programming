#include "main.h"
/**
  *print_number - numbers
  * @n: value range
  *
  * Return: alway 0
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		_putchar(n / 10);
	}
	_putchar(n % 10 + '0');

}

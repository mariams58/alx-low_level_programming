#include "main.h"
/**
  * print_sign - prints the signs of a number
  * @n: first parameterto check case
  *
  * Return: Always 0 (success)
  */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (1);
		_putchar('+');
	}
	_putchar(10);
}

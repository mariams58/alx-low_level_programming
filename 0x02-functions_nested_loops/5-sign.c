#include "main.h"
/**
  * print_sign - prints the signs of a number
  * @n: first parameter to check case
  *
  * Return: Always 0 (success)
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (+1);
	}
	_putchar(10);
}

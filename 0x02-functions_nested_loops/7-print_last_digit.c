#include "main.h"
/**
  * priint_last_digit - prints last digit of a given number
  * @n: given number
  *
  * Return: value of last digit
  */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = (n % 10) * -1;
		_putchar(num + '0');
	}
	else
	{
		num = n % 10;
		_putchar(num + '0');
	}
	return (num);
}

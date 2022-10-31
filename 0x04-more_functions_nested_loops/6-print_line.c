#include "main.h"
/**
  * print_line - prints out the \n a number of times
  * @n: the numbev given
  *
  * Return: always0 success.
  */
void print_line(int n)
{
	while (n > 0 && n < n + 1)
	{
		_putchar(95);
		n++;
	}
	_putchar(10);

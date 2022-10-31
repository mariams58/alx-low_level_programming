#include "main.h"
/**
  * print_line - prints out the \n a number of times
  * @n: the numbev given
  *
  * Return: always0 success.
  */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar(95);
		x++;
	}
	_putchar(10);

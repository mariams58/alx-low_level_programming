#include "main.h"
/**
  * print_most_numbers - prints numbers between 0 and 9 except 2 and 4
  *
  * Return: Always success 0
  */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		while (i != 50 || i != 52)
		{
			_putchar(i);
		}
	}
	_putchar(10);
}

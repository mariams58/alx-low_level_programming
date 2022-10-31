#include "main.h"
/**
  * print_most_numbers - prints numbers between 0 and 9 except 2 and 4
  *
  * Return: Always success 0
  */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar(10);
}

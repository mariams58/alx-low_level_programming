#include "main.h"
/**
  * more_numbers - prints the times table x14;
  *
  * Return: Always 0 sucess
  */
void more_numbers(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		i = '0';

		while (i < '15')
		{
			_putchar('0' + i);
			i++;
		}
		_putchar(10);
		j++;
	}
}

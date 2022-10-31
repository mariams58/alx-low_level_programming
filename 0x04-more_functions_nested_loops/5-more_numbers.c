#include "main.h"
/**
  * more_numbers - prints the times table x14;
  *
  * Return: Always 0 sucess
  */
void more_numbers(void)
{
	int i;
	int j;

	while (j < 11)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar(10);
		j++;
	}
}

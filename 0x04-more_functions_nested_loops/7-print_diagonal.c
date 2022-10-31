#include"main.h"
/**
  * print_diagonal - printa out a digonal line of a given size
  * @n: given num
  *
  * Return: Always 0 success
  */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar(92);
		_putchar(10);
		i++;
		n--;
	}
	if (i < 1)
	{
		_putchar(10);
	}
}

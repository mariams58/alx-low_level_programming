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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
				else
					_putchar(20);
			}
		}
	}
	putchar(10);
}

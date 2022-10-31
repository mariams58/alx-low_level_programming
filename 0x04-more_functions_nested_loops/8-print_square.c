#include "main.h"
/**
  * print_square - pritout squareshape of a given size
  * @size: size given
  *
  * Return: Always 0
  */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}

	}
	_putchar(10);
}

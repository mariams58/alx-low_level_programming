#include "main.h"
/**
  * print_triangle - prints out a triangle of a given size
  * @size: given size
  *
  */
void print_triangle(int size)
{
	int i, j, z;
	int x = 0;
	int y = size;

	for (i = 0; i < size; i++)
	{
		x = x + 1;
		y = y - 1;

		for (z = y; z > 0; z--)
		{
			_putchar(' ');
		}
		for (j = 0; j < x; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}

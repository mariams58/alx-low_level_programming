#include "main.h"
/**
  * print_triangle - prints out a triangle of a given size
  * @size: given size
  *
  */
void print_triangle(int size)
{
	int x = 0;
	int y = size;

	for (int i = 0; i < h; i++)
	{
		x = x + 1;
		y = y - 1;

		for (int z = y; z > 0; z--)
		{
			_putchar(' ');
		}
		for (int j = 0; j < x; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}

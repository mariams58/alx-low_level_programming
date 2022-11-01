#include "main.h"
/**
  *print_diagsums - prints out the result of the sum oftwo diagonals
  * @a: pointer to matrix
  * @size: given size
  *
  */
void print_diagsums(int *a, int size)
{
	int i, j, m, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		m = (i + size) + i;
		x += *(a + m);
	}
	for (j = 0; j < size; j++)
	{
		m = (j * size) + (size - 1 - j);
		y += *(a + p);
	}
	printf("%i, %i\n", x, y);
}

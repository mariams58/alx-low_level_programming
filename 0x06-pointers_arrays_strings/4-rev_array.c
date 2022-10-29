#include "main.h"
/**
  * reverse_array - prints array in reverse
  * @a: pointer to array
  * @n: number
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int i;
	int rev;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		j--;

		if (i != 0 && i < n)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar(a);
}

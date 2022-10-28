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

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = rev;
	}
	for (i = 0; i <  n; i++)
	{
		if (i != 0 && i < n)
		{
			_putchar(44);
			_putchar(32);
		}
		_putchar(a[i]);
	}
}

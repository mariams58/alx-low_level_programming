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
	int rev[n];

	for (i = 0; i < n; i++)
	{
		rev[n - 1 - i] = a[i];
	}
	for (i = 0; i <  n; i++)
	{
		a[i] = rev[i];
	}
	return (0);
}

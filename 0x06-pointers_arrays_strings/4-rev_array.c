#include "main.h"
/**
  * reverse_array - prints array in reverse
  * @ a: pointer to array
  * @n: number
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int *x;
	int i;

	for(i = a[n - 1]; i < n &&  i == a[0]; i--)
	{
		putchar(a[i]);
	_putchar(10);
	return (0);
}

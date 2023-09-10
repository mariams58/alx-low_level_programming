#include "main.h"
/**
  * get_bit - prints binary equivalent of given num at index
  * @n: number given
  * @index: index given
  *
  * Return: bit at index or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned  int i = 0;
	int arr[64];

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	while (n != 0)
	{
		if (n % 2 != 0)
			arr[i] = 1;
		else
			arr[i] = 0;
		i++;
		n = n / 2;
	}
	if (index > 64)
		return (-1);
	if (index > i)
		return (0);
	return (arr[index]);
}

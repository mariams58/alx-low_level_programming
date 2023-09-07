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
	unsigned long int i = 0;
	int arr[1024];

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (n > 1)
	{
		while (n != 0)
		{
			if (n % 2 != 0)
				arr[i] = 1;
			else
				arr[i] = 0;
			i++;
			n = n / 2;
		}
	}
	else
		arr[i] = n;
	if (index > i)
		return (-1);
	return (arr[index]);
}

#include "main.h"
/**
  * clear_bit - prints binary equivalent of given num at index
  * @n: number given
  * @index: index given
  *
  * Return: bit at index or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n >= ULONG_MAX)
		*n = ULONG_MAX;
	if (index <= 63)
	{
		if ((*n & (1 << index))!= 0)
			*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}

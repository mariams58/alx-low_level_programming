#include "main.h"
/**
  * flip_bits - prints binary equivalent of given num at index
  * @n: number given
  * @m: number given
  *
  * Return: number of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int sub;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (m >= ULONG_MAX)
		m = ULONG_MAX;
	sub = n ^ m;
	while (sub != 0)
	{
		sub = sub & (sub - 1);
		i++;
	}
	return (i);
}

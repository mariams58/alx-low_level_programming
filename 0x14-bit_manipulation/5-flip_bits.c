#include "main.h"
/**
  * flip_bits - gets the bit representation of a number at a given index
  * @n: number given
  * @m: indexgiven
  *
  * Return: number of bit needed tobe flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int a;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (m >= ULONG_MAX)
		m = ULONG_MAX;
	a = n ^ m;
	while (a)
	{
		a = a & (a - 1);
		num++;
	}
	return (num);
}

#include "main.h"
/**
  * set_bit - gets the bit representation of a number at a given index
  * @n: number given
  * @index: indexgiven
  *
  * Return: value of bit at given index
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num = 1;

	if (*n >= ULONG_MAX)
		*n = ULONG_MAX;
	if (index > 63)
		num = -1;
	else
		*n = (1 << index) | *n;
	return (num);
}

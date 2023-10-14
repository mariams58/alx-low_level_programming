#include "main.h"
/**
  * get_bit - gets the bit representation of a number at a given index
  * @n: number given
  * @index: indexgiven
  *
  * Return: value of bit at given index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (n >= ULONG_MAX)
		n = ULONG_MAX;
	if (index > 63)
		num = -1;
	else
		num = (n >> index) & 1;
	return (num);
}

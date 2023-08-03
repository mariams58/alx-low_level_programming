#include "main.h"
/**
  * ck_prime - checks if a number is a prime number
  * @x: strt
  * @y: given number
  * Return: 1 or 0
  */
int ck_prime(int x, int y)
{
	int count;

	if (x <= y)
		if (y % x == 0)
			count += ck_prime(x + 1, y);
	if (count > 2)
		return (1);
	else
		return (0);
}

/**
  * is_prime_number - checks if a number is a prime number
  * @n: number given
  *
  * Return: 1 0r 0
  */
int is_prime_number(int n)
{
	if (n == 0)
		return (0)
	return (ck_prime(1, n));
}

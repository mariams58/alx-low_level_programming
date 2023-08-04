#include "main.h"
/**
  * ck_prime - checks if a number is a prime number
  * @x: strt
  * @y: given number
  * Return: 1 or 0
  */
int ck_prime(int x, int y)
{
	int count = 0;

	if (y == 1 || y == 2)
		return (1);
	else
		if (y % x  == 0 && x <= y)
		{
			count = 1 + ck_prime(x + 1, y);
		}
	if (count > 1)
		return (0);
	return (1);
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
		return (0);
	return (ck_prime(2, n));
}

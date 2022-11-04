#include "main.h"
/**
  * is_prime_number- retur a prime number
  * @n: number given
  *
  * Return: value
  */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

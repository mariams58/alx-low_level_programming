#include "3-calc.h"
/**
  * op_add - returns sum of values given
  * @a: first number
  * @b: second number
  *
  * Return: sum of numbers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns difference of values given
  * @a: first number
  * @b: second number
  *
  * Return: difference of numbers
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of values given
  * @a: first number
  * @b: second number
  *
  * Return: product of numbers
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - performs division operation
  * @a: first number
  * @b: second number
  *
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - performs division operation
  * @a: first number
  * @b: second number
  *
  * Return: result of division without fractions
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

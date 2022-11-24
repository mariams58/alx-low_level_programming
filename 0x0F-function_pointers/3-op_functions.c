#include "3-calc.h"
/**
  * op_add - returns sum of a and b
  * @a: number
  * @b: number
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns less of a and b
  * @a: number
  * @b: number
  *
  * Return: value after subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiply a and b
  * @a: number 1
  * @b: number 2
  *
  * Return: result of a multiplied by b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - return a divided by b
  * @a: number 1
  * @b: number 2
  *
  * Return: result of dividing a by b
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
  * op_mod - returns the remainderr of a divided by b
  * @a: number 1
  * @b: number 2
  *
  * Return: the modulus of a over b
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

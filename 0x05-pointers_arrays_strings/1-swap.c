#include "main.h"
/**
  * swap_int - swaps the values of 2 integer
  *@a: pointer address of value a
  *@b: pointer address of integer b
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

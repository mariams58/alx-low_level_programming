#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: array of numbers given
  * @size: size of the arry given
  * @cmp: a function pointer
  *
  * Return: index of the number
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

#include "function_pointers.h"
/**
  * array_iterator - Loops through an arry of a given size and outputs value
  * @array: pointer to the given array
  * @size: the size of the array
  * @action: the function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int num;
	size_t i = 0;

	while (i < size)
	{
		num = array[i];
		action(num);
		i++;
	}
}

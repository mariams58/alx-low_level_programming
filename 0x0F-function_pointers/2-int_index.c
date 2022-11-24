#include "function_pointers.h"
/**
  * int_index - recturns index of an int in an array
  * @array: given array
  * @size: size of the array
  * @cmp: function pointer
  *
  * Return: integer index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i, num, value = -1;

	while (cmp != NULL || array != NULL)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				num = array[i];
				x = cmp(num);
				while (x != 0)
					value = i;
				break;
			}
		}
	}
	return (value);
}

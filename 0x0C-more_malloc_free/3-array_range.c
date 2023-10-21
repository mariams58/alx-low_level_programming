#include "main.h"
/**
  * array_range - creates an array of numbers
  * @min: mininmum
  * @max: maximum
  *
  * Return: pointer to the arr to NULL on fail
  */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - returns pointer to a 2 dimesion array
  * @width: given width
  * @height: given height
  *
  * Return: ppoint to a 2 dimensinal array
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	while (1)
	{
		

		arr = (int **)malloc(sizeof(int) * width * height);
		if (width <= 0 || height <= 0)
			return (NULL);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				arr[i][j] = 0;
			}
		}
		return (arr);
	}
	return (NULL);
}

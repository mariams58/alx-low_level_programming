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
		if (width + height < 2 || width < 1 || height < 1)
			return (NULL);
		arr = malloc(height * 8);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * 4);
			if (arr[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
		return (arr);
	}
	return (NULL);
}

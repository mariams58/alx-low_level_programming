#include <stdio.h>
/**
  * main - prints a differnet combination of 3 numbers
  *
  * Return: Always 0
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = i + 2; k < 10; k++)
			{
				if (i != k && k != j && i != j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i + j + k) < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

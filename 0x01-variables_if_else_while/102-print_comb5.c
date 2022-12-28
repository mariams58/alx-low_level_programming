#include <stdio.h>
/**
  * main - prints a number combination of 00 00 - 99 99
  *
  * Return: Always 0
  */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(32);
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

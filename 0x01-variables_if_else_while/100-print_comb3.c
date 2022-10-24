#include <stdio.h>

/**
  *main - pringout number comb
  *
  * Return: Always 0
  */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		for (j = '0'; j <= '9'; j++)
		{
			{
				if (i == j)
				{
					puthar(i);
					putchar(j);
					}
			}
			putchar(',');
		}
	}
	putchar(10);
	return (0);
}

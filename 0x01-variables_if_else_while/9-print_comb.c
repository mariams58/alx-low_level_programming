#include <stdio.h>
/**
  * main- prints numbers seperatedby ,
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}

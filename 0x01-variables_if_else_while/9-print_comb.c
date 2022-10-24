#include <stdio.h>
/**
  * main- prints numbers seperatedby ,
  *
  * Return: Always 0.
  */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}

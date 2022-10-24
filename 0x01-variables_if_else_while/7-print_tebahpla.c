#include <stdio.h>
/**
  * main - prits alphabest in reverse
  *
  * Return: Always 0
  */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}

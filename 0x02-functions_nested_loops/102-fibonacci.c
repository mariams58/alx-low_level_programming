#include <stdio.h>
/**
 * main - prints out the first fibonacci sequence
 *
 * Return: Always 0 success
 */
int main(void)
{
	unsigned long int a = 1, b = 2, fib;
	int count;

	for (count = 0; count != 50; count++)
	{
		if (count == 0)
			fib = a;
		else if (count == 1)
			fib = b;
		else
		{
			fib = a + b;
			a = b;
			b = fib;
		}
		printf("%ld", fib);
		if (count < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

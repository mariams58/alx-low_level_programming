#include <stdio.h>
/**
 * main - prints out the first fibonacci sequence
 *
 * Return: Always 0 success
 */
int main(void)
{
	unsigned long int a = 1, b = 2, fib, sum;
	int count = 0;

	while (count < 50)
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
		if (fib < 4000000 && (fib % 2 == 0))
			sum += fib;
		count ++;
	 }
	 printf("%ld\n", sum);
	 return(0);
}

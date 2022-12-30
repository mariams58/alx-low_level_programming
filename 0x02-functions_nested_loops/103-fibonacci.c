#include <stdio.h>
/**
  * print_sum - prints out the sum of aong int
  * @sum: given number to print
  */
void print_sum(unsigned long int sum)
{
	while (sum / 10)
		print_sum(sum / 10);
	printf("%ld", (sum % 10));
}

/**
  * main - prints out the first fibonacci sequence
  *
  * Return: Always 0 success
  */
int main(void)
 {
	 unsigned long int a = 1, b = 2, fib, sum;
	 int count;

	 while (count &&  fib < 4000000)
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
		 if (fib % 2 == 0)
			 sum += fib;
		 count ++;
	 }
	 print_sum(sum);
	 printf("\n");
	 return(0);
}

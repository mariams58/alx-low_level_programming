#include <stdio.h>
/**
  * main - prints out the first fibonacci sequence
  *
  * Return: Always 0 success
  */
int main(void)
 {
	 int a = 1, b = 2, count, fib;

	 for (count = 0; count != 98; count++)
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
		 printf("%d", fib);
		 if (count < 97)
			 printf(", ");
	 }
	 printf("\n");
	 return(0);
}

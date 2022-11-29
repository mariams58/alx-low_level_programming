#include <stdio.h>
/**
  * main - prints out the size of a pointer and other euivalents
  *
  * Return: Always 0
  */
int main(void)
{
	int y = 98;
	int *n;

	n = &y;

	/*prints out the size of a pointer using printf and %p */
	printf("the size of pointer n: %lu\n", sizeof(n));
	/*prints out the value of var n which ids assigned to variable y */
	printf("Address of y: %p\n", &y);
	printf("Value of pointer n: %p\n", n);
	return (0);
}

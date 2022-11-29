#include <stdio.h>
/**
  * main - prints out the address of pointers*
  *
  * Return: Always 0
  */
int main(void)
{
	int c;
	char n;
	float x;

	printf("The address of variable 'c': %p\n", &c);
	printf("The addrees of variable 'n': %p\n", &n);
	printf("The address of variable 'x': %p\n", &x);
	return (0);
}

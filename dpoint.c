#include <stdio.h>
/**
  * main - dereferencing pointers with int, char type examples
  *
  * Return: Always 0
  */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'f';
	pp = &c;
	n = 80;
	p = &n;

	printf("the value of n is : %d\n", n);
	printf("the address of 'p' is: %p\n", &n);
	printf("the value of 'p' is: %p\n", p);
	printf("the value of 'c' is: %d ('%c')\n", c, c);
	printf("the address of 'pp' is: %p\n", &c);
	printf("the value of 'pp' is: %p\n", pp);

	/* examples of dereferencing pointers- start */
	*p = 115;
	*pp = 'A';

	printf("the value of 'n' is: %d\n", n);
	printf("Value of '*p' is: %d\n", *p);
	printf("Value of 'c' is: %d ('%c')\n", c, c);
	printf("Value of '*pp' is: %d ('%c')\n", *pp, *pp);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* mmore headers go here */

/**
  *main - Entry point to te program
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%dis zero\n", n);
	}
	return (0);
}
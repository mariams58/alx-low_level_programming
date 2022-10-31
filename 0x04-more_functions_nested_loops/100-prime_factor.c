#include <stdio.h>
#include <math.h>
/**
  *main - Find and prints the largest prime number
  *
  * Return: Always 0
  */
int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; c++)
	{
		if (num % i == 0)
		{
			printf("d\n", i);
			break;
		}
	}
	return (0);
}

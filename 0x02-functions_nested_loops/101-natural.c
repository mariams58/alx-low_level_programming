#include <stdlib.h>
#include "main.h"
/**
  * print_sum_numbers - the prints the sum of natural numbers that are multiples of three and five
  *
  */
void print_sum_number(void)
{
	int i = 1, sum = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("The sum of all the multiples of 3 and 5 that are natural number is %d\n", sum);
}

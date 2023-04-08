#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - genertes random passwords
  * Return: Always 1 success
  */

int main(void)
{
	int random, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		random = (rand() % 127);
		printf("%c", random);
		total -= random;
	}
	printf("%c", total);
	return (0);
}

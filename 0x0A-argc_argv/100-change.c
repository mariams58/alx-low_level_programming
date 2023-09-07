#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * my_change - prints out arg
  * @s: pointer to str given
  *
  * Return: Always 0
  */
int my_change(int s)
{
	int i = 0, num = s, res = 0;
	int coin[] = {25, 10, 5, 2, 1};

	while (coin[i] && num != 0)
	{
		res +=  num / coin[i];
		num = num % coin[i];
		i++;
	}
	printf("%d\n", res);
	return (0);
}

/**
  * main - print out name of program
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int x;
	int i = 0;

	if (argc == 2)
	{
		x = atoi(argv[1]);

		if (x <= 0)
			printf("%d\n", i);
		my_change(x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

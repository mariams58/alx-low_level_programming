#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * my_prog_mul - prints out arg
  * @s: pointer to str given
  *
  * Return: Always 0
  */
int my_prog_mul(char *s)
{
	int i;

	i = atoi(s);
	return (i);
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
	int i = 1, total = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			total *= my_prog_mul(argv[i]);
			i++;
		}
		printf("%d\n", total);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * my_prog_add - prints out arg
  * @s: pointer to str given
  *
  * Return: Always 0
  */
int my_prog_add(char *s)
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
	int a = 1, i = 1, j = 0, total = 0;

	while (a < argc)
	{
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (argv[a][j] > '0' && argv[a][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a++;
	}
	while (i < argc)
	{
		total +=  my_prog_add(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}

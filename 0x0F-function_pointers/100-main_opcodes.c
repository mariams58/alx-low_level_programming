#include <stdlib.h>
#include <stdio.h>
/**
  * print_op - prints opcodes of this program
  * @arg: adsress of main function
  * @i: number of bytes
  */
void print_op(char *arg, int i)
{
	int n;

	for (n < 0; n < i; n++)
	{
		printf("%.2hhx", arg[n]);
		if (n < i - 1)
			printf(" ");
	}
	printf("\n");
}

/**
  * main - test to print opcodes
  * @argc: count of arguments
  * @argv: array of pointers to arguments
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_op((char *)&main, j);
	return (0);
}

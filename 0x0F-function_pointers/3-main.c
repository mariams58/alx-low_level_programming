#include "3-calc.h"
/**
  * main - print out name of program
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int x, y, z = 0;
	int (*f)(int, int) = get_op_func(argv[2]);

	if (argc != 4 && strlen(argv[2]) != 1)
	{
		printf("Error");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = f(x, y);
	printf("%d\n", z);
	return (0);
}

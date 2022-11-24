#include "3-calc.h"
/**
  * main - test code
  * @argc: operation
  * @argv: arguments
  *
  * Return: alway 0
  */
int main(int argc, char *argv[])
{
	int (*math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	math = get_op_func(argv[2]);

	if (!math)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", math(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

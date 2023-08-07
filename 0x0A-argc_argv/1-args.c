#include "main.h"
#include <stdio.h>
/**
  * my_prog1 - prints out arg
  * @s: pointer to str given
  *
  * Return: Always 0
  */
int my_prog1(int s)
{
	int i = s - 1;

	if (s > 0)
		putchar(i + '0');
	putchar('\n');
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
	(void) *argv; /* unsused variable */
	my_prog1(argc);
	return (0);
}

#include "main.h"
/**
  * my_prog - prints out arg
  * @s: pointer to str given
  *
  * Return: Always 0
  */
int my_prog(char *s)
{
	int i = 0;
	if (*s)
		_putchar('.');
	while(s[++i])
		_putchar(s[i]);
	_putchar('\n');
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
	(void) argc; /* unsused variable */
	my_prog(argv[0]);
	return (0);
}

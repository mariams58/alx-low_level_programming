#include "main.h"
/**
  *main - Entry to program
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int r;

	r = print_sign(90);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar(10);
	r = print_sign(-90);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar(10);
	return (0);
}

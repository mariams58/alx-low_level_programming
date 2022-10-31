#include "main.h"
/**
  * print_numbers - print numers from 0 till 9
  *
  * Return: Always success 0
  */
void print_numbers(void);
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}

#include <stdio.h>
#include "main.h"
/**
  *main - Entry point to the program
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
  * print_alphabet - Prints "a - z"
  */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
}

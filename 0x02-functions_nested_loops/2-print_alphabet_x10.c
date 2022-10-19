#include <stdio.h>
#include "main.h"
/**
  *main - Entry level to the program"
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
  * print_alphabet_x10 - Prints tle alphabets on ten lines each
  */
void print_alphabet_x10(void)
{
	char i;
	int j;

	while (j < 11)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
			_putchar(10);
		}
	}

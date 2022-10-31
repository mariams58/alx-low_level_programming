#include "main.h"
#include <stdio.h>
/**
  * print_lines - prints s bytes of a buffer
  * @c: buffer to print
  * @s: bytes of the buffer
  * @l: line to print
  *
  */
void print_lines(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
		{
			printf("%02x", c[l * 10 + j]);
		}
		else
			printf(" ");
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
		{
			putchar(c[l * 10 + k]);
		}
		else
			putchar(' ');
	}
}

/**
  * print_buffer - prints the buffer
  * @b: buffer to print
  * @size: size of buffer
  *
  */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < size / 10)
		{
			print_lines(b, 9, i);
		}
		else
		{
			print_lines(b, size % 10 - 1, i);
		}
		putchar(10);
	}
	if (size == 0)
		putchar(10);
}

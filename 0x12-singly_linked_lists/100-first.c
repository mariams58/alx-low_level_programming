#include <stdio.h>
/**
  * first_str - prints out a string
  *
  * Return: Always 0
  */
int first_str(void) __attribute__ ((constructor));
int first_str(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return (0);
}

#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	char typeChar;
	int typeInt;
	long int typeLInt;
	long long int typeLLInt;
	float typeFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(typeChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(typeLInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(typeLLInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(typeFloat));
	return (0);
}

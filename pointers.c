#include <stdio.h>
/**
  *main - prints out size pf data types
  *
  * Return: Aways 0
  */
int main(void)
{
	int n;
	
	printf("Type of 'char' on my computer: %lu bytes \n", sizeof(char));
	printf("Type of 'int' on my computer: %lu bytes \n", sizeof(int));
	printf("Type of 'float' on my computer: %lu bytes \n", sizeof(float));
	printf("Type of variable n on my computer: %lu bytes\n", sizeof(n));
	return (0);
}

#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints out the data in the stuct dog given
  * @d: pointer to the structure given
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	else if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

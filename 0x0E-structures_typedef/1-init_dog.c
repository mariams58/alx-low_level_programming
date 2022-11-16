#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - function
  * @d: a pointer
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

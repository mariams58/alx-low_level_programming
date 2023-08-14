#include "dog.h"
/**
  * init_dog - initialises the dog species
  * @d: pointer to the struct given
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: dog owner
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

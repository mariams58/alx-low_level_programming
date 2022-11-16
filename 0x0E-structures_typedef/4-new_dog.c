#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *new_dog - stores a new dog
  * 
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (ndog == NULL)
		ndog = malloc(sizeof(dog_t));
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}

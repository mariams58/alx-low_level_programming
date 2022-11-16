#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - stores a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner detail
  * Return:  strct of new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
	free(ndog->name);
	free(ndog->age);
	free(ndog->owner);
	free(ndog);
}

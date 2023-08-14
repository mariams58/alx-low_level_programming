#include "dog.h"
/**
  * free - fress the dog struct
  * @d: pointer to the struct dog
  *
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

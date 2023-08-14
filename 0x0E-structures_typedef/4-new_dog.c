#include "dog.h"
#include <string.h>
/**
  * new_dog - creates a new struct of dog
  * @name: name of new dog
  * @age: age of new dog
  * @owner: owner of the new dog
  *
  * Return: pointer to the new dog created
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *new_name, *new_own;

	my_dog = malloc(sizeof(dog_t));
	new_name = malloc(sizeof(strlen(name) + 1));
	new_own = malloc(sizeof(strlen(owner) + 1));
	if (new_name)
		strcpy(new_name, name);
	if (new_own)
		strcpy(new_own, owner);
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = new_name;
	my_dog->age = age;
	my_dog->owner = new_own;
	return (my_dog);
}

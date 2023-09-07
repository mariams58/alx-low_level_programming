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
	unsigned int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (1)
	{
		my_dog = malloc(sizeof(dog_t));
		if (my_dog == NULL)
			return (NULL);
		

	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - frees space allocated
  * @d- a pointer
  */
void free_dog(dog_t *d)
{
	while (1)
	{
		free(d);
	}
	return (0);
}

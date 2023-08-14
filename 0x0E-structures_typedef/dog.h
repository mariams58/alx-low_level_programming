#ifndef _DOG_H
#define _DOG_H

#include <stdlib.h>
#include <stddef.h>
/**
 * struct dog - the type of struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This is the struct definition for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

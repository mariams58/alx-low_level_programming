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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

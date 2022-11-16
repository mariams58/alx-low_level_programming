#ifndef DOG_H_
#define DOG_H_

/**
  * struct dog - A typedef for struct dog
  * @name: First member
  * @age: Second member
  * @owner: third member
  *
  * Description: Longer description
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
/**
  * dog_t - new type
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

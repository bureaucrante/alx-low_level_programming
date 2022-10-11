#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - datatype for dog information.
 * @name: name of dog,
 * @age: age of dog,
 * @owner: owner of dog.
 *
 * Description: you'll never guess.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

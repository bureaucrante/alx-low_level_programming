#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialise a variable of struct dog datatype
 * @d: pointer to location of struct_dog object d.
 * @name: name of dog,
 * @age: age of dog,
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

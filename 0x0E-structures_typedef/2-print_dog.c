#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the members of a struct variable
 * @d: pointer to the location of variable elements.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: nil");
	else
		printf("Name: %s\n", (*d).name);

	if (d->age == 0)
		printf("Age: nil");
	else
		printf("Age: %f\n", (*d).age);

	if (d->owner == NULL)
		printf("Owner: nil");
	else
		printf("Owner: %s\n", (*d).owner);
}


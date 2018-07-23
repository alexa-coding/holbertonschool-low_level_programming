#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - prints a struct dog
  * @d: pointer
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (name == NULL)
		printf("Name: (nill)");
	else
		printf("Name: %s\n", d->name);
	if (age == NULL)
		printf("Age: (nill)");
	else
		printf("Age: %f\n", d->age);
	if (owner == NULL)
		printf("Owner: (nill)");
	else
		printf("Owner: %s\n", d->owner);
}

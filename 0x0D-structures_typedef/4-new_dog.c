#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *new_dog - creates a new dog
  * @name: pointer
  * @age: float
  * @owner: pointer
  * Return: 0 if program is successful
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;
	(void)age;

	a = malloc(sizeof(struct dog));
	if (a == NULL)
		return (NULL);
	a->name = name;
	a->owner = owner;
	return (a);
}

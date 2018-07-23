#include "dog.h"

/**
  * init_dog -  initialize a variable of type struct dog
  * @d: pointer
  * @name: pointer
  * @age: float
  * @owner: pointer
  * Return: 0 if program is successful
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

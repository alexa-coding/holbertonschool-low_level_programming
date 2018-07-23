#ifndef DOG_H
#define DOG_H
/**
  * struct dog - random struct
  * @name: a name
  * @age: an age
  * @owner: the owner
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

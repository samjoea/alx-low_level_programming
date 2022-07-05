#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: varible of type struct dog
 * @name: name of d to be initialised
 * @age: age of d to be initialized
 * @owner: name of owner to be initialized
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

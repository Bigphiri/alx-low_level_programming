#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - inatitializes a variable of struct dog.
 * @d: The pointer to the address.
 * @name: The name of the dog.
 * @owner: Dog owner.
 * @age: The age.
 *
 * Return: returns a pointer to the variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

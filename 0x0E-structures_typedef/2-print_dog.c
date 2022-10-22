#include "dog.h"
#include "stdio.h"
#include "stddef.h"

/*
 * print_dog - prints elemnts of structure struct dog.
 *
 * @d - The structure to be printed.
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	
	if  (d == NULL)
	{
		printf("nil\n");
	}

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d-> age);
	printf("Owner: %s\n", d -> owner);
}

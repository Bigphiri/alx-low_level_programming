#ifndef _dog_h_
#define _dog_h_
#include <stdlib.h>

/**
 * struct dog - a structer with the details of a dog.
 * @name: Name of the dog
 * @age: age of tge dog
 * @owner: name of the dog owner.
 * Description: details of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

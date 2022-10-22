#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - A structure with a dog's details.
 * @name: Dog's name
 * @age: Dog's age.
 * @owner: Dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

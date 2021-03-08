#include "dog.h"
#include <stddef.h>
/**
 * init_dog - dog initialization
 * @d: pointer to structure dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
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

#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * free_dog - free memory dog
 * @d: pointer to structure dog
 * Return: Void
*/
void free_dog(dog_t *d)
{
	/**
	 * if an malloc is used to set one of the elements
	 * we need to free that element
	*/
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

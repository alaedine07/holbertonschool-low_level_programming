#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * new_dog - print elements of struct dog
 * @d: pointer to structure dog
 * Return: Void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
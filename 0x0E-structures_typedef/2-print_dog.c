#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - print elements of struct dog
 * @d: pointer to structure dog
 * Return: Void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

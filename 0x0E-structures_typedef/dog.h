#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog definition
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: dog structure
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

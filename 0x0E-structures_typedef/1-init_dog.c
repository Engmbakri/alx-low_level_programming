#include "doh.h"

/**
 * init_dog - function that initialize a variable
 * of type struct dog
 * @d: dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->0wner = owner;
	}
}

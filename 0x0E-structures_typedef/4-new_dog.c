#include <stdlib.h>
#include "doh.h"

/**
 * _strlen - function gets the length of a string
 * @str: string to get the length
 * Return: length of @str
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - function that returns @dest with a copy of string from @src
 * @src: string to copy
 * @dest: copy string to here
 * @Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function creats a new dog
 * @name: dog's namee
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct pointer dog
 * null if function fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/* if name and owner are empty and age is less than zero return null */
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	gog->owner = _strcopy(dog->owner, owner);
	return (dog);
}

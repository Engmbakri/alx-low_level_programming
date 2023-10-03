#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialized
 * Return: pointer to array or null
*/

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size);

	if (size == 0 || str == 0)
		return (0);
	while (size--)
		str[size] = c;

	return (str);
}





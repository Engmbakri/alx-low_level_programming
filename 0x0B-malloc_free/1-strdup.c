#include "main.h"

/**
 * *_strdup - returns a pointer to a new string
 * @str: string
 * Return: Null or m
*/


char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == Null)
		return (Null);
	for ( ; str[size] != '\0' ; size++)
	;

	/* +1 on the size puts the end of string character */
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (Null);
	else
	{
		for (; i < size ; i++)
			m[i] = str[i];
	}
	return (m);
}

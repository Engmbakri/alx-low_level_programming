#include "main.h"

/**
 * *_strchr - entry point
 * @s: input
 * @c: input
 * Return: pointer to the first occurrence of
 *         the character c in the string s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}

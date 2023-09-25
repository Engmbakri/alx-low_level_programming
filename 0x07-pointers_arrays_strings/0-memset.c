#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: conistant
 * @n: maximum byte to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int dol;

	for (dol = 0 ; n > 0 ; dol++, n--)
	{
		s[dol] = b;
	}

	return (s);
}

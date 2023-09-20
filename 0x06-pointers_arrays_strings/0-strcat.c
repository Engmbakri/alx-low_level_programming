#include "main.h"

/**
 * _strcat - function that concatenates
 *           two string
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a]!='\0')
	{
		a++;
	}
	b = 0
	while (src[b]!='\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

return (dest);
}

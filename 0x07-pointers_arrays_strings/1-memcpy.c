include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: pointer to desit
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

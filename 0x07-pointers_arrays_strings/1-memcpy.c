include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int dol;

	for (dol = 0 ; dol < n ; dol++)
	{
		dest[dol] = src[dol];
	}

	return (dest);
}

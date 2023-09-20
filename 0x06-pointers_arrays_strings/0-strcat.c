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
	/*find the size of dest array*/
	while (dest[a])
		a++;

	/*iterate through each src array without the null byte*/
	for (b = 0 ; src[b] ; b++)
		/*append src[b] to dest[a] while overwritting the null byte in desr*/
		dest[a++] = scr[b];

return (dest);
}

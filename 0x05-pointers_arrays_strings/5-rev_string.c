#include <unistd.h>
#include "main.h"

/**
 * rev_string - revers a string
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string lingth whitout null char*/
	for (l = 0 ; ss[l] != '\0' ; ++l)
		;

	/*sawp the string by looping to half the string*/
	for (i = 0 ; i < l / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /* -1 because the array start from 0*/
		s[l - 1 - i] = temp;
	}
}

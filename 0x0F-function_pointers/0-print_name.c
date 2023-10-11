#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: string name
 * @f: function pointer to print the name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

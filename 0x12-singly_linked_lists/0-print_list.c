#include "lists.h"

/**
 * _strlen - function returns length of a string
 * @s: string
 * Return: int length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/***
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: the number of nodes
*/

size_t print_list(const list_t *h);
{
	size_t count;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", _strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
	count++;
	h = h->next;
	}
	return (count);
}

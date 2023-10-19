#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the first node
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t  counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0 "(nil)");
		h = h->next;
		counter++;
	}
	return (counter);
}

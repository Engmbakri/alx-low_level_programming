#include "lists.h"

/**
 * list_len -  function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the first nude
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}

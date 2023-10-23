#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (index == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	listint_t *current = *head;
	unsigned int count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
		if (current == NULL || current->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = current->next;
		current->next = newnode;
		return (newnode);
	}
}

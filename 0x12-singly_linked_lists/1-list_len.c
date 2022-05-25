#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: points to the head of the list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}

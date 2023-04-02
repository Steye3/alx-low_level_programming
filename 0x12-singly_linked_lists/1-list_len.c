#include "lists.h"

/**
* list_len - function that retuns the number of elements of a list_t list.
* @h: holds the list_t list
*
* Return: the number of nodes in h.
*/

size_t list_len(const list_t *h)
{
	size_t nodes;
	nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}

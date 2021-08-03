#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list
 * @h: head of a list
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

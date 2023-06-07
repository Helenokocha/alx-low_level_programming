#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: the number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t numnode = 0;

	while (h != NULL)
	{
		numnode++;
		h = h->next;
	}
	return (numnode);
}

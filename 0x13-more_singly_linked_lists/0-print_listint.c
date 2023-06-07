#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_ to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h-> next;
		numnode++;
	}
	return (numnode);
}

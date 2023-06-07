#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in a listint_t list
 * @head: first node in the listint_t list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t list
 * @head: pointerto the first element in the listint_t list
 *
 * Return: the data inside the elements that are deleted
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_node;

	if (*head == NULL)
		return (0);
	num_node = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	free(temp);

	return (num_node);
}

#include "lists.h"

/**
 * free_listint - free the listint_t list
 * @head: header pointer to the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *special;

	while ((special = head) != NULL)
	{
		head = head->next;
		free(special);
	}
}

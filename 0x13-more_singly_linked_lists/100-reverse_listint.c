#include "lists.h"
/**
 * reverse_listint - reverses lintint_t
 * @head: head pointer to the list
 * Return:a pointer to the reversed list first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *osmosis;
	listint_t *n;

	osmosis = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = osmosis;
		osmosis = *head;
		*head = n;
	}
	*head = osmosis;
	return (*head);
}

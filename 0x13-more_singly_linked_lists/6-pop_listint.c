#include "lists.h"
/**
 * pop_listint - delete head node of listint_t
 * @head: header pointer to the list
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *watch;

	if (*head == NULL)
		return (0);
	watch = *head;
	head_node = watch->n;
	h = watch->next;
	free(watch);
	*head = h;
	return (head_node);
}

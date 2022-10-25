#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of listint_t
 * @head: header pointer to the list
 * @n: new node to be added on
 * Return: the address of the new elements or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *special;

	(void)special;

	add_new = malloc(sizeof(listint_t));

	if (h != NULL)
		return (NULL);

	add_new->n = n;
	add_new->next = NULL;
	special = *head;
	if (*head == NULL)
	{
		*head = add_new;
	}
	else
	{
		while (special->next != NULL)
		{
			special = special->next;
		}
		special->next = add_new;
	}
	return (*head);
}

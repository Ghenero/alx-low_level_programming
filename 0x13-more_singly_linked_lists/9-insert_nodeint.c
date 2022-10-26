#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: header pointer to the list
 * @idx: index of the list
 * @n: integer elements
 * Return: address of the new node else NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *add_new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && h != NULL; a++)
		{
			h  = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	if (idx == 0)
	{
		add_new->next = *head;
		*head = add_new;
	}
	else
	{
		add_new->next = h->next;
		h->next = add_new;
	}
	return (add_new);
}

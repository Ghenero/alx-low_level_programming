#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: head pointer to new node
 * @n: number of element
 * Return: address of the new elements or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addon;

	addon = malloc(sizeof(listint_t));

	if (addon == NULL)
		return (NULL);
	addon->n = n;
	addon->next = *head;
	*head = addon;

	return (*head);
}

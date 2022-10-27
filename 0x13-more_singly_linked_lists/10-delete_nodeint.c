#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index of listint_t
 * @head: head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded else -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *before;
	listint_t *next;

	before = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && before != NULL; a++)
		{
			before = before->next;
		}
	}
	if (before == NULL || (before->next == NULL && index != 0))
	{
		return (-1);
	}
	next = before->next;
	if (index != 0)
	{
		before->next = next->next;
		free(next);
	}
	else
	{
		free(before);
		*head = next;
	}
	return (1);
}

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
	listint_t *after;

	before = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && before != NULL; a++)
		{
			before = before->after;
		}
	}
	if (before == NULL || (before->after == NULL && index != 0))
	{
		return (-1);
	}
	after = before->after;
	if (index != 0)
	{
		before->after = after->after;
		free(after);
	}
	else
	{
		free(before);
		*head = after;
	}
	return (1);
}

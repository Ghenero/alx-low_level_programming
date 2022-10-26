#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: header pointer to the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *special;
	listint_t *entree;

	if (head != NULL)
	{
		entree = *head;
		while ((special = entree) != NULL)
		{
			entree = entree->next;
			free(special);
		}
		*head = NULL;
	}
}

#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @h: head pointer to the list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t triger = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		triger++;
	}
	return (triger);
}

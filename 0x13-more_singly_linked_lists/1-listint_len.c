#include "lists.h"

/**
 * listint_len - returns the number of elementsin listint_t
 * @h: header pointer to the list
 * Return: numbers of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t triger = 0;

	while (h != NULL)
	{
		h = h->next;
		triger++;
	}
	return (triger);
}

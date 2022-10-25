#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h:singly linked list pointer
 * Return: number of element i the list
 */
size_t print_list(const list_t *h)
{
	size_t linker;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	return (linker);
}

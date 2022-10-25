#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h:singly linked list pointer
 * Return: number of element i the list
 */
size_t print_list(const list_t *h)
{
	size_t linker = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		linker++;
	}
	return (linker);
}

#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) of a listint_t
 * @head: header pointer to the list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

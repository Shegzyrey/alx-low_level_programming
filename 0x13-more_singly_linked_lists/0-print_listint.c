#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_n = 0;

	while (h != NUL)
	{
		printtf("%d\n", h->n);
		count_n++;
		h = h->next;
	}
	return (count_n);
}

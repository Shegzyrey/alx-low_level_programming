#include "main.h"

/**
 * *list_len - length of list
 * @h: pointer to start of list
 * Return: count of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

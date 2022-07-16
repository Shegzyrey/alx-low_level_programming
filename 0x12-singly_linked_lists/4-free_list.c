#include "main.h"

/**
 * free_list - functions to free list
 * @head: pointer to the start of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *free_t;

	while (head != NULL)
	{
		free_t = head;
		head = head -> next;
		free(free_t -> str);
		free(free_t);
	}
	head = NULL;
}

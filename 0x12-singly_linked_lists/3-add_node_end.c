#include "lists.h"

/**
 * add_node_end - adding node to the end of the list
 * @head: pointer to the beginning of the list
 * @str: string to be added
 * Return: mreturn new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *current;
	int s;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (inc == NULL)
		return (NULL);
	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add;
	}
	add->next = NULL;
	add->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		;
	add->len = a;
	return (add);
}

#include "main.h"

/**
 * add_node - function to add node at the start of list
 * @head: pointer to the start of the list
 * @str: pointer to string
 * Return: what to return
 */

list_t *add_node(list_t **head, comst char *str)
{
	list_t *add;
	int a;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = a;
	add->next = *head;
	*head = add;
	return (*head);
}

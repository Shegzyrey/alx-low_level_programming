#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Desription: singly linked list node structure
 *
 */


typedef struct list_s
{
	int n;
	struct listint_s *next;
} list_t;

size_t print_listint_t(const listint_t *h)

#endif

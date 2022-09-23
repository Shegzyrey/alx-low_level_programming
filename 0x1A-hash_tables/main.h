#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct hash_node_value - node of a hash table
 *
 * @key: the uniques key for the hash table
 * @value: corresponding key value
 * @next: pointer to the next node in the list
 */

typedef struct hash_node_value
{
	char *key;
	char *value;
	struct hash_node_value *next;
}hash_node_t;


/**
 * struct hash_table_value - hash table data structure
 * 
 * @size: the array size
 * @array: array to be traversed
 */

typedef struct hash_table_value
{
	unsigned long int size;
	hash_node_t **array;
}hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif

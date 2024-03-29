#ifndef _HASH_TABLES_H_
#define _HASH_TBLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct hash_node_s - node of a hash table
 *
 * @key: the uniques key for the hash table
 * @value: corresponding key value
 * @next: pointer to the next node in the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_value - hash table data structure
 * @size: the array size
 * @array: array to be traversed
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif

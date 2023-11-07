#include "hash_tables.h"

/**
*hash_table_set - function that adds an element to the hash table
*@ht: pointer to hash table
*@key: key to add the element
*@value: value to add the element
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *v_copy, *k_copy;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	v_copy = strdup(value);
	if (!v_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = v_copy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(v_copy);
		return (0);
	}
	k_copy = strdup(key);
	if (!k_copy)
		return (0);
	new_node->key = k_copy;
	new_node->value = v_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

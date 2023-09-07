#include "hash_tables.h"

/**
 * hash_table_set - updates an ele in a ht
 * @ht: address of the hash table.
 * @key:  key to be added - can't be an empty string.
 * @value: The associated value with key.
 *
 * Return: failure - 0.
 *         success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *_new;
	char *valueCopy;
	unsigned long int _index, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	_index = key_index((const unsigned char *)key, ht->size);
	for (k = _index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = valueCopy;
			return (1);
		}
	}

	_new = malloc(sizeof(hash_node_t));
	if (_new == NULL)
	{
		free(valueCopy);
		return (0);
	}
	_new->key = strdup(key);
	if (_new->key == NULL)
	{
		free(_new);
		return (0);
	}
	_new->value = valueCopy;
	_new->next = ht->array[_index];
	ht->array[_index] = _new;

	return (1);
}

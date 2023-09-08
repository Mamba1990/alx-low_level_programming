#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: An address of to the ht
 * @key: key for getting the value of.
 *
 * Return: Faillure - NULL.
 *         Otherwise - Success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *_node;
	unsigned long int _index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	_index = key_index((const unsigned char *)key, ht->size);
	if (_index >= ht->size)
		return (NULL);

	_node = ht->array[_index];
	while (_node && strcmp(_node->key, key) != 0)
		_node = _node->next;

	return ((_node == NULL) ? NULL : _node->value);
}

#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creating a sorted ht
 * @size: new sorted hash table's size
 *
 * Return: Faillure - NULL.
 *         Otherwise - succuess
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_t;
	unsigned long int k;

	h_t = malloc(sizeof(shash_table_t));
	if (h_t == NULL)
		return (NULL);

	h_t->size = size;
	h_t->array = malloc(sizeof(shash_node_t *) * size);
	if (h_t->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		h_t->array[k] = NULL;
	h_t->shead = NULL;
	h_t->stail = NULL;

	return (h_t);
}

/**
 * shash_table_set - inserts an ele to a sorted hash table.
 * @ht: An address of the sorted hash table.
 * @key:  key to add - can't be an empty string.
 * @value: The associated value with key.
 *
 * Return: failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *_new, *t;
	char *valueCopy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = valueCopy;
			return (1);
		}
		t = t->snext;
	}

	_new = malloc(sizeof(shash_node_t));
	if (_new == NULL)
	{
		free(valueCopy);
		return (0);
	}
	_new->key = strdup(key);
	if (_new->key == NULL)
	{
		free(valueCopy);
		free(_new);
		return (0);
	}
	_new->value = valueCopy;
	_new->next = ht->array[index];
	ht->array[index] = _new;

	if (ht->shead == NULL)
	{
		_new->sprev = NULL;
		_new->snext = NULL;
		ht->shead = _new;
		ht->stail = _new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		_new->sprev = NULL;
		_new->snext = ht->shead;
		ht->shead->sprev = _new;
		ht->shead = _new;
	}
	else
	{
		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		_new->sprev = t;
		_new->snext = t->snext;
		if (t->snext == NULL)
			ht->stail = _new;
		else
			t->snext->sprev = _new;
		t->snext = _new;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the associated value  with ht
 * @ht: An address of the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: Faillure - NULL.
 *         Otherwise - success
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *_node;
	unsigned long int _index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	_index = key_index((const unsigned char *)key, ht->size);
	if (_index >= ht->size)
		return (NULL);

	_node = ht->shead;
	while (_node != NULL && strcmp(_node->key, key) != 0)
		_node = _node->snext;

	return ((_node == NULL) ? NULL : _node->value);
}

/**
 * shash_table_print - displays a sorted hash table in order.
 * @ht: An address of the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *_node;

	if (ht == NULL)
		return;

	_node = ht->shead;
	printf("{");
	while (_node != NULL)
	{
		printf("'%s': '%s'", _node->key, _node->value);
		_node = _node->snext;
		if (_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - displays a sorted hash table in reverse order.
 * @ht: An address of the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *_node;

	if (ht == NULL)
		return;

	_node = ht->stail;
	printf("{");
	while (_node != NULL)
	{
		printf("'%s': '%s'", _node->key, _node->value);
		_node = _node->sprev;
		if (_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - erases a sorted hash table.
 * @ht: An address of the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *_node, *t;

	if (ht == NULL)
		return;

	_node = ht->shead;
	while (_node)
	{
		t = _node->snext;
		free(_node->key);
		free(_node->value);
		free(_node);
		_node = t;
	}

	free(h->array);
	free(h);
}

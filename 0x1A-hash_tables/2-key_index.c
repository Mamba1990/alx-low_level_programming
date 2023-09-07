#include "hash_tables.h"

/**
 * key_index - returns the index at key/value
 *    of a  pair to be stored in array of a hash table.
 * @key:  key to get the index of.
 * @size: array's size of the hash table.
 *
 * Return: key's index
 * Description: implements the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"

/**
*key_index - computes the key from using code from hash function
*@key: is the key
*@size: is the size of the array of the hash table
*Return: the index at which the key/value pair
*should be stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int digest;

	digest = hash_djb2(key);

	return (digest % size);
}

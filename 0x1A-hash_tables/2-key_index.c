#include "hash_tables.h"
/**
* key_index - Get the index for a key in the hash table array
* @key: The key string
* @size: The size of the hash table array
*
* Return: The index for the key in the hash table array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;
return (index);
}

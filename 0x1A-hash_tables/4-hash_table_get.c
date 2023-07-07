#include "hash_tables.h"
/**
* hash_table_get - Retrieve the value associated with a key
* @ht: The hash table
* @key: The key string
*
* Return: The value associated with the key, or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current;
unsigned long int index;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];

/* Traverse the linked list at the index*/
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);

current = current->next;
}

return (NULL);  /*Key not found*/
}

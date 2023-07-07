#include "hash_tables.h"

/**
* hash_table_delete - Delete a hash table
* @ht: The hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current;
hash_node_t *temp;
if (ht == NULL)
return;

/* Free memory for each node in the hash table*/
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];

while (current != NULL)
{
temp = current;
current = current->next;

free(temp->key);
free(temp->value);
free(temp);
}
}

/* Free memory for the array and the hash table itself*/
free(ht->array);
free(ht);
}

#include "hash_tables.h"

/**
* hash_table_print - Print the key-value pairs in the hash table
* @ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
int first_pair;
unsigned long int i;
if (ht == NULL)
return;

first_pair = 1;

printf("{");

for (i = 0; i < ht->size; i++)
{
hash_node_t *current = ht->array[i];

while (current != NULL)
{
if (first_pair == 0)
printf(", ");

printf("'%s': '%s'", current->key, current->value);

first_pair = 0;

current = current->next;
}
}

printf("}\n");
}

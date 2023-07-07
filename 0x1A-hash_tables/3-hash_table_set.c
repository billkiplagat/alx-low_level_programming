#include "hash_tables.h"

/**
* create_node - Create a new hash node
* @key: The key string
* @value: The value string
*
* Return: A pointer to the new hash node
*/
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (NULL);

node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (NULL);
}

node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (NULL);
}

node->next = NULL;

return (node);
}
/**
* hash_table_set - Add or update a key-value pair in the hash table
* @ht: The hash table
* @key: The key string
* @value: The value string
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
hash_node_t *current;
if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);

new_node = create_node(key, value);
if (new_node == NULL)
return (0);

current = ht->array[index];

/*  Check if the key already exists in the hash table*/
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
/* Update the value and free the duplicated value*/
free(current->value);
current->value = strdup(value);
free(new_node->key);
free(new_node->value);
free(new_node);
return (1);
}
current = current->next;
}

/* Add the new node at the beginning of the list*/
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}

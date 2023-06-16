#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a node at a given index
* in a doubly linked list
* @h: double pointer to the list
* @idx: index of the node to insert
* @n: data to insert
*
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
current = *h;
for (i = 0; current && i < idx; i++)
{
if (i == idx - 1)
{
if (current->next == NULL)
return (add_dnodeint_end(h, n));
new_node->next = current->next;
new_node->prev = current;
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
else
current = current->next;
}
return (NULL);
}

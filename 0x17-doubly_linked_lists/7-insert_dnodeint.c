#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *h;
*h = new_node;
return (new_node);
}
current = *h;
for (i = 0; i < idx - 1 && current; i++)
{
current = current->next;
}
if (i < idx - 1 || current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at particular index
 * @head: pointer to the head of the list
 * @index: where the node is at
 * Return: the node at index index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = head;
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
{
return (NULL);
}
return (current);
}

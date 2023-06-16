#include "lists.h"
/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * at a given index
 * @head: double pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head, *previous = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
while (current && i < index)
{
previous = current;
current = current->next;
i++;
}
if (i < index)
return (-1);
if (previous == NULL)
*head = current->next;
else
{
previous->next = current->next;
}
free(current);
return (1);
}

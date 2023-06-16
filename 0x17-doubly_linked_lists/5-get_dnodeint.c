#include "lists.h"

/**
* get_dnodeint_at_index - gets the nth node of a doubly linked list
* @head: pointer to the list
* @index: index of the node to return
*
* Return: address of the node, or if it does not exist, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
unsigned int i = 0;
dlistint_t *current = head;
if (!current) {
return (NULL);
}
while (current && i < index) {
current = current->next;
i++;
}
return (current);
}

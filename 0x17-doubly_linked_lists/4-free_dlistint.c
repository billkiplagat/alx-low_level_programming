#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
* @head: pointer to the list to free
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tem;
while (head)
{
tem = head->next;
free(head);
head = tem;
}
}

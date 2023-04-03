#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 *
*/
void free_listint(listint_t *head)
{
listint_t *next_node;
while (head != NULL)
{
next_node = head;
head = head->next;
free(next_node);
}
}

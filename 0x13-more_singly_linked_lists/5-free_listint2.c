#include "lists.h"
/**
 * free_listint2 - frees a list and adds NULL
 * @head: pointer to the pointer of head of the list
 *
*/
void free_listint2(listint_t **head)
{
listint_t *current = *head, *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}

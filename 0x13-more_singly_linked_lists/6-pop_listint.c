#include "lists.h"
/**
 * pop_listint - deletes head of the node
 * @head: pointer to the pointer of head of the list
 * Return: the head's data that was deleted
*/
int pop_listint(listint_t **head)
{
listint_t *current;
int n;
if (*head == NULL)
return (0);
n = (*head)->n;
current = *head;
*head = (*head)->next;
free(current);
return (n);
}

#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: pointer to the pointer of head
 *
 * Return: pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head, *temp;
if (*head == NULL || (*head)->next == NULL)
{
return (*head);
}
while (current->next != NULL)
{
temp = current->next;
current->next = temp->next;
temp->next = *head;
*head = temp;
}
current->next = NULL;
return (*head);
}

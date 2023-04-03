#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of list
 * @head: pointer to the pointer of head of the list
 * @n: value to be added
 *
 * Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *last_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}
return (new_node);
}

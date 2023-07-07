#include "lists.h"

/**
 * add_nodeint - adds a node in a list
 * @head: pointer to the pointer of head of the list
 * @n: value to be added
 *
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n) {
    listint_t *newNode;
    newNode = malloc(sizeof(listint_t));
    if (!newNode)
        return (NULL);
    newNode->n = n;
    newNode->next = *head;
    *head = newNode;
    return (newNode);
}

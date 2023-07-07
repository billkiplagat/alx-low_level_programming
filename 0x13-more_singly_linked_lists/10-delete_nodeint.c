#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index) {
    listint_t *current = *head;
    listint_t *previous = NULL;
    unsigned int i = 0;
    if (*head == NULL)
        return (-1);
    while (current != NULL && i < index) {
        previous = current;
        current = current->next;
        i++;
    }
/* if index is > than length of list */
    if (i < index)
        return (-1);
    if (previous == NULL) {
        *head = current->next;
    } else {
        previous->next = current->next;
    }
    free(current);
    return (1);
}

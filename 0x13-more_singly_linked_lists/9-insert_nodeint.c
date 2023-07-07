#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: pointer to the head of the list
 * @idx: index where new node should be added
 * @n: integer value of the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
    listint_t *new_node, *current;
    unsigned int i;
/* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
/* Set the values for the new node */
    new_node->n = n;
/* If idx == 0, insert at the beginning of the list */
    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }
/* Traverse the list to the node before the insertion point */
    current = *head;
    for (i = 0; i < idx - 1 && current != NULL; i++) {
        current = current->next;
    }
/* If the index is out of bounds return NULL */
    if (i < idx - 1 || current == NULL) {
        free(new_node);
        return (NULL);
    }
/* Insert the new node between current and current->next */
    new_node->next = current->next;
    current->next = new_node;
    return (new_node);
}

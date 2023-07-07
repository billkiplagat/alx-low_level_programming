#include "lists.h"

/**
 * add_node_end - function to add a node at the end
 * @head: pointer to head pointer
 * @str: pointer to string
 *
 * Return: pointer to new node created at the end
 */
list_t *add_node_end(list_t **head, const char *str) {
    list_t *new_node_end, *last_node;
    new_node_end = malloc(sizeof(list_t));
    if (new_node_end == NULL)
        return (NULL);
    new_node_end->str = strdup(str);
    new_node_end->len = strlen(str);
    new_node_end->next = NULL;
    if (*head == NULL) {
        *head = new_node_end;
    } else {
        last_node = *head;
        while (last_node->next != NULL) {
            last_node = last_node->next;
        }
        last_node->next = new_node_end;
    }
    return (new_node_end);
}

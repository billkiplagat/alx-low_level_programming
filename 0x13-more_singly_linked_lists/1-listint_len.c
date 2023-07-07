#include "lists.h"

/**
 * listint_len - counts number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h) {
    size_t count = 0;
    while (h) {
        count++;
        h = h->next;
    }
    return (count);
}

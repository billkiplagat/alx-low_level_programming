#include "lists.h"
/**
 * list_len - function to count elements in a list
 * @h: pointer to head
 *
 * Return: elements number
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}

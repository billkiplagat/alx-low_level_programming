#include "lists.h"
/**
 * print_list - function to print elements in a list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s", h->len, h->str);
}
count++;
h = h->next;
printf("\n");
}
return (count);
}

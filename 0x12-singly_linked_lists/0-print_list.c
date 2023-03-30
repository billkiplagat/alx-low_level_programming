#include <stdio.h>
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
while (h)
{
if (!h->str)
printf("[0] (nil)");
else
	printf("[%u] %s", h->len, h->str);
h = h->next;
count++;
printf("\n");
}
return (count);
}

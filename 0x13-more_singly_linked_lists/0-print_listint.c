#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%u\n", h->n);
h = h->next;
num++;
}
return (num);
}

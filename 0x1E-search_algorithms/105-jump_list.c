#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted singly linked list
* @list: A pointer to the head of the linked list to search.
* @size: The number of nodes in the list.
* @value: The value to search for.
* Return: If the value is not present or the head of the list is NULL, NULL.
*         Otherwise, a pointer to the first node where the value is located.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump_step, step_size;
listint_t *current, *prev;

if (list == NULL || size == 0)
return (NULL);

jump_step = 0;
step_size = sqrt(size);
for (current = prev = list; current->index + 1 < size && current->n < value;)
{
prev = current;
for (jump_step += step_size; current->index < jump_step;
current = current->next)
{
if (current->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
current->index);

while (prev->index < current->index && prev->n < value)
{
printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}
printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

return ((prev->n == value) ? (prev) : (NULL));
}

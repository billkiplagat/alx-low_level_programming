#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (!head)
return (0);
while (head)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}

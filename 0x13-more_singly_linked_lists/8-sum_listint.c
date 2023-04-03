#include "lists.h"
/**
 * sum_listint - computes the sum of all the integers in a singly linked list
 * @head: pointer to the head of the list
 * Return: the sum of all integers in the list
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}

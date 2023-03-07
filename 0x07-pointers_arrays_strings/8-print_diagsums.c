#include "main.h"
/**
 * print_diagsums - function
 * @a: pointer to 2D array
 * @size: 2D array size
 * Description: the function computes sum of diagonals on 2D array
 */
void print_diagsums(int *a, int size)
{
int diagonal[3];
int diagonal2[5];
int i, sum = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
diagonal[i] = *(a + i * size + i);
sum = sum + diagonal[i];
}
for (i = 0; i < size; i++)
{
diagonal2[i] = *(a + (size - 1 - i) * size + i);
sum2 = sum2 + diagonal2[i];
}
printf("%d, %d\n", sum, sum2);
}

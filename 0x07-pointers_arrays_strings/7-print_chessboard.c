#include "main.h"
/**
 * print_chessboard - function
 * @a: pointer to first address
 * Description: prints the chessboard with 2D array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j, row = 8, column = 8;
for (i = 0; i < row; i++)
{
for (j = 0; j < column; j++)
{
printf("%c", *(*(a + i) + j));
}
printf("\n");
}
}

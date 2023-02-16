#include <stdio.h>

/**
*main - This is my third main function
*Description: The program outputs the size of different datatypes in 32 and 64 bit machines
*Return: 0 for now
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));

return (0);
}

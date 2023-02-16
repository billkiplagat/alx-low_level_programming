#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Description: Outputs using write function
*Return: 1
*/
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n", 59);
return (1);
}

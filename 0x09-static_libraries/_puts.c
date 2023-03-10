#include "main.h"
void _puts(char *s)
{
int index;
for (index = 0; *(s + index) != '\0'; index++)
{
_putchar(*(s + index));
}
_putchar('\n');
}

#include "main.h"
/**
*jack_bauer -  function
*Description: used to print every minute of the day
*Return: 0 for now
*/
void jack_bauer(void)
{
int hour = 0;
int min;
while (hour <= 23)
{
min = 0;
while (min <= 59)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
min++;
_putchar('\n');
}
hour++;
}
}

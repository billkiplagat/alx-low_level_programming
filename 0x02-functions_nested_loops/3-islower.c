#include "main.h"
/**
 * _islower -  used to print 1 if char is lower case
 * @c: used to get char inputs
 * Description: the program checks if a char is lower case
 * Return: 0 for now
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}

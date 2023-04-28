#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
int i = 1;
char *p = (char *)&i;
return ((int)*p);
}

#include "main.h"
/**
 * _isalpha -  function
 * @c: used to get inputs
 * Description: used to print alphabetic character.
 * Return: 0 for now
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
else
return (0);
}

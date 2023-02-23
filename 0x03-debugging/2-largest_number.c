#include "main.h"

/**
 * largest_number - function to evaluate the largest number
 * Description: to print largest number
 * Return: largest number for now
*/

int largest_number(int a, int b, int c)
{
    int largest;

   if (a > b && a > c){
       largest = a;
   } else if(b > a && b > c){
       largest = b;
   }
    else
    {
        largest = c;
    }

    return (largest);
}

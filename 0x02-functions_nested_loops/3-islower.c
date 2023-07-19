#include "main.h"

/**
* _is lower - check if char is lowercase
* @c: is the char is lowercase, otherwise 0.
*/

int _islower(int c)
{
   if (c >= 'a' && c <= 'z')
           return (1);
   else
           return (0);
}

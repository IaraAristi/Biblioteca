#include "Recursividad.h"
unsigned rFactorial(unsigned n)
{
    if(n==0)
        return 1;
    else
        return n* rFactorial(n-1);
}

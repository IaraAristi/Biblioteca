#include "Recursividad.h"
unsigned rFactorial(unsigned n)
{
    if(n==0)
        return 1;
    else
        return n* rFactorial(n-1);
}
unsigned rStrlen(char * cad)
{
    if(!*cad)
        return 0;
    return rStrlen(cad+1)+1;
}
void *busquedaBinariaRecursivaGenericaPtr(const void *arr, int izquierda, int derecha, const void *clave, size_t tam, int (*comparar)(const void *, const void *))
{
    int mitad;
    const void *elementoMitad;
    int cmp;
    if (derecha >= izquierda)
    {
        mitad = izquierda + (derecha - izquierda) / 2;
        elementoMitad = (const char *)arr + mitad * tam;

        cmp = comparar(clave, elementoMitad);
        if (cmp == 0)
            return (void *)elementoMitad;
        else if (cmp < 0)
            return busquedaBinariaRecursivaGenericaPtr(arr, izquierda, mitad - 1, clave, tam, comparar);
        else
            return busquedaBinariaRecursivaGenericaPtr(arr, mitad + 1, derecha, clave, tam, comparar);
    }

    return NULL; // No encontrado
}
int CompararEnteros(const void * arg1,const void * arg2)
{
    int * a=(int *)arg1;
    int * b=(int *)arg2;
    if(*a<*b)
        return -1;
    else if(*a>*b)
        return 1;
    return 0;
}

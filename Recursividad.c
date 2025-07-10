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

unsigned rMap(void* v,unsigned ce, unsigned tam, void accion(void*))
{
    if(ce==0)
        return 0;
    accion(v);
    return rMap(v+tam,ce-1,tam,accion);
}

void MostrarInt(void* c)
{
    printf("%5d",*(int*)c);
}

char* rstrchr(char* s,char c)
{
    if(*s=='\0'||toupper(*s)==toupper(c))
        return s;
    return rstrchr(s+1,c);
}

char* rstrrchr(char* s, char c)
{
    if(*s=='\0')
        return NULL;
    char* res= rstrrchr(s+1,c);
    if(res!=NULL)
        return res;
    if(toupper(*s)==toupper(c))
        return s;
    return NULL;
}

int esPalindromo(const char* cad)
{
    char* ini;
    char* fin;
    if(!rStrlen((char*)cad))
        return 0;
    ini=(char*)cad;
    fin=(char*)cad+rStrlen((char*)cad);
    return _esPalindromo(ini, fin);
}
int _esPalindromo(char* pi, char* pf)
{
    if(pi<pf)
    {
        if(!isalpha(*pi))
            return _esPalindromo(pi+1,pf);
        if(!isalpha(*pf))
            return _esPalindromo(pi, pf-1);
        if(toupper(*pi)==toupper(*pf))
            return _esPalindromo(pi+1,pf-1);
        else
            return 0;
    }
    return 1;
}

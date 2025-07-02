#include <stdio.h>
#include <stdlib.h>
#include "Recursividad.h"

int main()
{
    int Vec[]={1,2,3,4,5};
    int Ini=0;
    int Fin;
    int val=10;
    int ce=(sizeof(Vec)/sizeof(Vec[0]));
    int * res;
    Fin=ce-1;
    res=busquedaBinariaRecursivaGenericaPtr(Vec,Ini,Fin,&val,sizeof(int),CompararEnteros);
    if(res==NULL)
        printf("No se encontro");
    else
        printf("%d",*res);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Recursividad.h"
//#include "Genericos.h"
int main()
{
    //int Vec[]={1,2,3,4,5};
    char cadena[]="Hola mundo";
    char cadena2[]="Arriba la birra";
    //int Ini=0;
    //int Fin;
    //int val=1;
    //char c='M';
    //int ce=(sizeof(Vec)/sizeof(Vec[0]));
    //int * res;
    //Fin=ce-1;
    /*res=busquedaBinariaRecursivaGenericaPtr(Vec,Ini,Fin,&val,sizeof(int),CompararEnteros);
    if(res==NULL)
        printf("No se encontro");
    else
        printf("%d",*res);
    return 0;*/
    //rMap(Vec,ce,sizeof(int),MostrarInt);
    //rstrchr(cadena,c);
    //rstrrchr(cadena,c);
    printf("%d", esPalindromo(cadena));
    printf("%d", esPalindromo(cadena2));
}

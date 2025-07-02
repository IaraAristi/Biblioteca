#ifndef RECURSIVIDAD_H_INCLUDED
#define RECURSIVIDAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
unsigned rFactorial(unsigned n);
unsigned rStrlen(char * cad);
void *busquedaBinariaRecursivaGenericaPtr(const void *arr, int izquierda, int derecha, const void *clave, size_t tam, int (*comparar)(const void *, const void *));
int CompararEnteros(const void * arg1,const void * arg2);
#endif // RECURSIVIDAD_H_INCLUDED

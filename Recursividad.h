#ifndef RECURSIVIDAD_H_INCLUDED
#define RECURSIVIDAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
unsigned rFactorial(unsigned n);
unsigned rStrlen(char * cad);
void *busquedaBinariaRecursivaGenericaPtr(const void *arr, int izquierda, int derecha, const void *clave, size_t tam, int (*comparar)(const void *, const void *));
int CompararEnteros(const void * arg1,const void * arg2);
unsigned rMap(void* v,unsigned ce, unsigned tam, void accion(void*));
void MostrarInt(void* c);
char* rstrchr(char* s,char c);
char* rstrrchr(char* s, char c);
int _esPalindromo(char* pi, char* pf);
int esPalindromo(const char* cad);
#endif // RECURSIVIDAD_H_INCLUDED

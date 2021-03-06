/* 
* Cabecera que contiene la declaracion de las funciones asi como las estructuras
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char StackEntry;
typedef struct nodoPila{
    StackEntry entry; 
    struct nodoPila *ptrSiguiente; /** Apuntador al siguiente nodo*/
}NodoPila;
 
typedef NodoPila *ptrNodoPila;

/** Prototipos */
void push(ptrNodoPila*, StackEntry);
StackEntry pop(ptrNodoPila*);
StackEntry topStack(ptrNodoPila*);
void printStack(ptrNodoPila);
void delStack(ptrNodoPila*); 
bool stackEmpty(ptrNodoPila*);
int totalNodes(ptrNodoPila);
void verificarExpresion(char**);
void verificarDelimitador(char**,char,char);



/** 
* Name: Stack.c
* Author: Ramses Martinez
* Version: 1.0.0    14/04/2016
* Description: Archivo que contiene las funciones de la pila dinamica
*/ 
#include "Stack.h"

/** Insertar un nuevo nodo */
void push(ptrNodoPila *ptrCima, StackEntry entry){
    ptrNodoPila ptrNuevo; /** Apuntador al nuevo nodo */
    ptrNuevo = malloc(sizeof(NodoPila));
    /** Inserta el nuevo nodo encima de la pila */
    if(ptrNuevo != NULL){
        ptrNuevo -> entry = entry;
        ptrNuevo -> ptrSiguiente = *ptrCima;
        *ptrCima = ptrNuevo;
    }else{
        printf("%d No se inserto. Memoria insuficiente. \n",entry);
    }
} 

/** Eliminar un nodo de la cima de la pila */
StackEntry pop(ptrNodoPila *ptrCima){
    ptrNodoPila ptrTemp; /** Apuntador a un nodo temporal */
    StackEntry valorElim; /* Valor del nodo */
    
    ptrTemp = *ptrCima;
    valorElim = ( *ptrCima )-> entry;
    *ptrCima = ( *ptrCima ) -> ptrSiguiente;
    free(ptrTemp);
    return valorElim;
}

/** Devuelve la cima de la pila */
StackEntry topStack(ptrNodoPila *ptrCima){
     return (*ptrCima) -> entry;
}

/**Imprimir la pila */
void printStack(ptrNodoPila ptrActual){
    if (ptrActual == NULL){
        printf("\n\t--------");
        printf("\n\t| NULL |");
        printf("\n\t--------");
        printf("\n\t| PILA |");
        printf("\n\t--------\n");
    }else{
        printf("\n\t--------");
        printf("\n\t| NULL |");
        /**Mientras no sea el final de la pila*/
        while(ptrActual != NULL){
            printf("\n\t--------");
            printf("\n\t|  %d   |", ptrActual -> entry);
            ptrActual = ptrActual -> ptrSiguiente;
        }
        printf("\n\t--------");
        printf("\n\t| PILA |");
        printf("\n\t--------\n");
    }
}

/** Elimina toda la pila */
void delStack(ptrNodoPila *ptrActual){
    while(!stackEmpty(ptrActual)){
        StackEntry aux = pop(ptrActual);
    }
}

/** Devuelve true si la pila esta vacia, de lo contrario false */
bool stackEmpty(ptrNodoPila *ptrCima){
    return *ptrCima == NULL;
    
}

/**Devuelve el total de nodos en la pila */
int totalNodes(ptrNodoPila ptrActual){
    int nodes = 0; /** Conteo de los nodos */
    while(ptrActual != NULL){
        ptrActual = ptrActual -> ptrSiguiente;
        nodes++;
    }
    return nodes;
}

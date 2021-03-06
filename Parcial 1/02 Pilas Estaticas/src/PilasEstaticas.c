/*
* Archivo que contiene las funciones de la pila
*/

#include "PilasEstaticas.h"

/** Crear pila*/
void createStack(Stack *pila){
    pila -> top = -1;
}

/** Insertar elemento */
bool push(StackEntry item, Stack *pila){
    if (stackFull(pila))
        return false;
    else{
        pila -> top++;
        pila -> entry[pila -> top] = item;
    }
    return true;
}

 /** Pregunta si la pila vacia. Retorna true si esta vacia */
bool stackEmpty(Stack *pila){
    return pila -> top < 0;
}

/** Pregunta si la pila esta llena */
bool stackFull(Stack *pila){
    return pila -> top >= MAXSTACK -1;
}  

/** Vacia toda la pila */
void delStack(Stack *pila){
    int i;
    for(i = pila -> top; i >= 0 ; i--){
        pila -> entry[i] = 0;
        pila -> top--;
    }  
}

/** Eliminar dato y retornarlo. Se debe validar en el main aunque ya incluye ya tiene validacion*/
StackEntry pop(Stack *pila){
    int aux;
    aux = pila -> entry[pila -> top];
    pila -> entry[pila -> top]=0;
    pila -> top--;
    return aux;
}

int menu(){ 
    int opc;
    printf("\nElija una opcion");
    printf("\n1. Insertar");
    printf("\n2. Eliminar");
    printf("\n3. Vaciar");
    printf("\n4. Cima");
    printf("\n5. Tamanio actual");
    printf("\n6. Salir");  

    printf("\n\nOpcion:\t");    
    scanf("%d",&opc);

    return opc;
}

void printStack(Stack *pila){
    if(stackEmpty(pila)){
        printf("\n\t--------");
        printf("\n\t| NULL |");
        printf("\n\t--------");
        printf("\n\t| PILA |");
        printf("\n\t--------\n");
    }else{
        int i;
        printf("\n\t--------");
        printf("\n\t| NULL |");

        for (i = pila -> top; i >= 0; i--){
            printf("\n\t--------");
            printf("\n\t|  %d   |", pila -> entry[i]);
        }
        
        printf("\n\t--------");
        printf("\n\t| PILA |");
        printf("\n\t--------\n");
    }
}

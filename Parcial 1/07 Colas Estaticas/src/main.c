/*
 *    main.c
 * 
 *    Date of creation: 10/03/2016
 *              Author: Hernández Morales Osvaldo
 *             Version: 1.0   
 *                Note: None
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
 
int menu ( void );
void insertar ( int entry );
void despachar ( void );
int cola[50];
int final = 0;
 
int main()
{
	int opc = 0;
	int entry = 0;
 
	opc = menu();
 
	while ( opc != 5 )
	{
		switch ( opc ){
			case 1:
				
				printf("Ingrese un entero: ");
				scanf("%d", &entry);
				insertar( entry );
				
				opc = menu();
				break;
			case 2:
				despachar();
				 
				opc = menu();
				break;
			case 3:
				if( final == 0){
					
					printf("Cola VACIA!         ");
				}else{
					
					printf("Cola OCUPADA!         ");
				}
				 
				opc = menu();
				break;
			case 4:
				if( final == 10){
					
					printf("Cola LLENA!         ");
				}else{
					
					printf("Cola NO LLENA!         ");
				}
				 
				opc = menu();
				break;
			default:
				
				printf("Opcion Invalida!");
				 
				opc = menu();
				break;
		}
	}
 
	return 0;
}
 
int menu ( void )
{
	int opc2, i;
	
	
	printf("Cola de enteros");
	printf("\n");
	
	
	for ( i = 0; i < 10; i++ ){
		
		printf("%i", cola[i]);
		
	}
	
	printf("\n\tCola con Arreglos Estatico!\n");
	printf("\n");
	printf("\n\tMenu\n\n");
	printf("\n");
	printf("[1] Ingresar.");
	printf("\n");
	printf("[2] Sacar.");
	printf("\n");
	printf("[3] Verificar si esta vacio.");
	printf("\n");
	printf("[4] Verificar si esta lleno.");
	printf("\n");
	printf("[5] Salir del Programa.");
	printf("\n");
	printf("Ingrese la opcion deseada: ");
	printf("\n");
	scanf("%d", &opc2);
	
 
	return opc2;
}
 
void insertar ( int entry )
{
	if ( final > 9 ){
	
		printf("La Cola esta LLENA!              ");
	}
	else if ( final <= 9 ){
		cola[final] = entry;
		final++;
	}
}
 
void despachar ( void )
{
	int j;
 
	if ( final <= 0 ){
	
		printf("La Cola esta VACIA!              ");
	}
	else if ((final > 0) && (final <= 10)){
	
		printf("DESPACHA ENTERO!              ");
		for( j = 0; j < 10; j++ ){
			cola[j] = cola[j+1];
			cola[j+1] = 0;
		}
	}
	final--;
}

// Punto 3
#include <stdio.h>

void main (){
    printf("Hola mundo");   
    //Declaracion de puntero a una variable tipo entero
    int variable=5;
    int *pvariable = &variable;

    printf("\nContenido del puntero: %d",*pvariable);
    printf("\nDireccion de memoria almacenada del puntero: %p",pvariable);
    printf("\nDireccion de memoria de la variable: %p",&variable);
    printf("\nLa direccion de memoria del puntero: %p", &pvariable);
    printf("\nMemoria ultilizada %d", sizeof(variable));

}
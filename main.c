#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main() {
    int num1, num2;
    int opcion;
    int resultado_entero;
    float resultado_flotante;
    int t;
    
    printf("Ingrese el tamaño del arreglo: 	");
    scanf("%d", &t);

    float arreglo[100];

    if (arreglo == NULL) {
        printf("Error al asignar memoria dinámica.\n");
        return 1;
    }
    
    for (int i = 0; i < t; i++) {
        printf("Ingrese el elemento %d del arreglo: ", i + 1);
        scanf("%f", &arreglo[i]);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%0.2f\n", arreglo[i]);
 }
    float escalar;
    printf("Ingrese el escalar por el que quiera sumar el arreglo: ");
    scanf("%f", &escalar);

    sumaArregloEscalar(arreglo, t, escalar);

    for (int i = 0; i < t; i++)
    {
        printf("%0.2f  \n", arreglo[i]);
        // se pone 0.2 para que redonde, f igual a valor decimal 
 }
    //%d se utiliza como especificador de formato, esacne valores entreros
    printf("Calculadora básica\n");
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Seleccione la operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        //&" se utiliza para obtener la dirección de memoria de una variable
        case 1:
            sumar(&num1, &num2, &resultado_entero);
            printf("El resultado de la suma es: %d\n", resultado_entero);
            break;
        case 2:
            restar(&num1, &num2, &resultado_entero);
            printf("El resultado de la resta es: %d\n", resultado_entero);
            break;
        case 3:
            multiplicar(&num1, &num2, &resultado_entero);
            printf("El resultado de la multiplicación es: %d\n", resultado_entero);
            break;
        case 4:
            dividir(&num1, &num2, &resultado_flotante);
            printf("El resultado de la división es: %.2f\n", resultado_flotante);
            break;
        default:
            printf("Opción inválida\n");
            break;
    }
    

    char cadena1[15], cadena2[15]; 
    int tc1=0, tc2=0;
    //tamaño para vector 
    printf("Ingrese la primera cadena\n");
    scanf(" %c", cadena1);
    printf("Ingrese la segunda cadena\n");
    fflush(stdin);// elimana cada carater residual
    scanf(" %c", cadena2);//lee un unico carracter desde la enntra estandar
    tc1= strlen(cadena1); //strlen calula una longitud de una cadena y devueleve un valor entero
    tc2= strlen(cadena2);
    compararCadena(tc1, tc2, cadena1, cadena2);
    return 0;
}

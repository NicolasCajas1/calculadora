#include <stdio.h>

// Función para sumar dos números
void sumar(int *num1, int *num2, int *resultado) {
    *resultado = *num1 + *num2;
}

// Función para restar dos números
void restar(int *num1, int *num2, int *resultado) {
    *resultado = *num1 - *num2;
}

// Función para multiplicar dos números
void multiplicar(int *num1, int *num2, int *resultado) {
    *resultado = *num1 * *num2;
}

// Función para dividir dos números
void dividir(int *num1, int *num2, float *resultado) {
    if (*num2 != 0) {
        *resultado = (float)(*num1) / *num2;
    } else {
        printf("¡Error! No se puede dividir entre cero.\n");
    }
}
void sumaArregloEscalar(float* arreglo, int t, float escalar){
   for(float i = 0; i < t-1; i++){
      *(arreglo+1) = *arreglo + escalar; // Suma el escalar al elemento actual del arreglo
      arreglo++; // Avanza el puntero al siguiente elemento del arreglo
   }
}


void compararCadena(int tc1, int tc2, char *cadena1,char *cadena2){
    int ver=1, base=0;
    if (tc1==tc2)
    {
        while (*cadena1 != '\0' && *cadena2 != '\0' && ver!=0)
        {
            if (*cadena1==*cadena2)
            {
                cadena1++;
                cadena2++;
                ver=1;
            }else
            {
                ver=0;
            }           
        }
        if (ver==1)
        {
            printf("Son iguales las cadenas\n");
        }else
        {
            printf("No son iguales las cadenas\n");
        }
        
        
    }else{
        printf("No son iguales las cadenas\n");
    }
    
}
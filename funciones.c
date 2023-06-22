#include <stdio.h>

// Función para sumar dos números
void sumar(float* num1, float* num2, float* r) {
    *r = *num1 + *num2;
}

// Función para restar dos números
void restar(float* num1, float* num2, float* r) {
    *r = *num1 - *num2;
}

// Función para multiplicar dos números
void multiplicar(float* num1, float* num2, float* r) {
    *r = *num1 * *num2;
}


void dividir(float* num1, float* num2, float* r) {
      if (*num2 == 0) {
        printf("¡Error! No se puede dividir entre cero.\n");
        return;
    }else {
       *r = *num1 / *num2;
    }
}

void sumaArregloEscalar(float* arreglo, int x, float escalar){
   for(float i = 0; i < x-1; i++){
      *(arreglo+1) = *arreglo + escalar; 
      arreglo++; 
   }
}

void compararCadena(char *cadena1, char *cadena2) {
    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}
/*Practica 2, ejercicio 7: hallar divisores de un numero entero*/
#include <stdio.h>

int main() {
    int x, i; //iniciamos las variables

/*usuario introduce el numero x*/
printf("Introduce un número entero: \n");
    scanf("%d", &x);

/*bucle for para calcular los divisores*/
    for (i=1; i<=x;i++ ){ //i es el divisor
        if (x%i==0){
            printf("%d es el divisor de %d. \n", i,x);
        }
        
    }
    return 0;
}
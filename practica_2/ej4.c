/*Practica 2, ejercicio 4 - programa que lea dos valores enteros desde teclado y
en el caso de la division nos dice con quien divide a quien*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b; //iniciamos las variables
printf("Ingrese el primer numero entero: "); //el usuario introduce los enteros
    scanf("%d", &a);
printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);
if (b != 0 && a % b == 0) { //comprueba si b no es cero y si el modulo  de a y b es cero (no hay resto de division)
        printf("%d divide a %d\n", b, a);
    }
    else if (a != 0 && b % a == 0) { //comprueba si a no es cero y si el modulo de b y a es cero
        printf("%d divide a %d\n", a, b);
    }
    else { //a y b son nulos o el resultado de la division no es un entero
        printf("Ninguno divide al otro\n");
    }

    return 0;
}

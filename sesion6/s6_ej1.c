/* Sesion 6 - ejercicio 1 - programa que calcula maximo comun divisor y minimo comun multiplo
de dos numeros positivos - MODULARIZADO */

#include <stdio.h>
#include <stdlib.h>

//funcion para calcular MCD sin Euclides
int calcularMCD(int *a, int *b) {
    int mcd = 1;
    int menor, i = 1;

    if (*a < *b) { //para decidir con que numero se va a dividir
        menor = *a;
    } else {
        menor = *b;
    }

    for (i = 1; i <= menor; i++) { //recorre todos los numeros hasta llegar al menor n de los dos
        if (*a % i == 0 && *b % i == 0) { //comprueba si i divide ambos numeros
            mcd = i; //guarda el divisor encontrado en mcd
        }
    }
    return mcd;
}

//funcion para calcular MCM
int calcularMCM(int *a, int *b) {
    return (*a * *b) / calcularMCD(a, b);
}

//funcion que imprime el menu y devuelve la opcion elegida
int imprimeMenu() {
    int opcion;
    printf("Que desea calcular?\n");
    printf("1. Maximo Comun Divisor (MCD)\n");
    printf("2. Minimo Comun Multiplo (MCM)\n");
    printf("Ingrese su opcion (1 o 2): ");
    scanf("%d", &opcion);
    return opcion;
}

//funcion que lee los dos numeros por referencia
void leerNumeros(int *a, int *b) {
    printf("Ingrese el primer numero positivo: ");
    scanf("%d", a);
    printf("Ingrese el segundo numero positivo: ");
    scanf("%d", b);
}

//funcion que muestra el resultado segun la opcion elegida
void mostrarResultado(int *opcion, int *a, int *b, int *mcd, int *mcm) {
    if (*opcion == 1) {
        printf("El Maximo Comun Divisor de %d y %d es: %d\n", *a, *b, *mcd);
    } else if (*opcion == 2) {
        printf("El Minimo Comun Multiplo de %d y %d es: %d\n", *a, *b, *mcm);
    } else {
        printf("Opcion no valida.\n");
    }
}

int main() {
    int opcion, a, b, mcd, mcm;
    char repetir;

    do {
        //mostrar menu y leer opcion
        opcion = imprimeMenu();

        //leer numeros (pasados por referencia)
        leerNumeros(&a, &b);

        //calcular resultados
        mcd = calcularMCD(&a, &b);
        mcm = calcularMCM(&a, &b);

        //mostrar resultado segun la opcion elegida
        mostrarResultado(&opcion, &a, &b, &mcd, &mcm);

        //preguntar si desea realizar otro calculo
        printf("Desea realizar otro calculo? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S'); //si el usuario dijo si, se repite el programa


    return 0;
}

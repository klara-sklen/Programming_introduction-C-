/*Sesion 6, ejercicio 4: programa que pide numeros enteros hasta que se introduzca 0, posteriormente
suma por separado los pares e impares y muestra estas sumas*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para poder trabajar con booleanos

/*Funcion entrada: para introducirlos datos*/
int entrada (){
    int n;
    printf("Introduce un entero: \n");
        scanf("%d", &n);
    return n;    
}

/*Comprueba si el numero es par*/
bool es_par(int n) {
    bool resultado;
    resultado==n%2;
    return resultado; //devuelve 1 si es par, 0 si es impar
}


/*Hace las sumas*/
void acumular_suma(int numero, int *suma_pares, int *suma_impares) {
    if (es_par(numero))
        *suma_pares += numero;
    else
        *suma_impares += numero;
}

/*Funcion que imprime los resultados*/
void mostrar_resultado(int suma_pares, int suma_impares) {
    printf("\nLa suma de los pares es: %d\n", suma_pares);
    printf("La suma de los impares es: %d\n", suma_impares);
}


int main() {
    int numero, suma_pares = 0, suma_impares = 0;

    do {
        numero = entrada();
        if (numero != 0)
            acumular_suma(numero, &suma_pares, &suma_impares);
    } while (numero != 0); //el bucle se ejecuta mientar no se introduzca un 0

    mostrar_resultado(suma_pares, suma_impares);

    return 0;
}
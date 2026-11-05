/*Sesion 10: ejercicio 2- programa que suma todos los bordes de una matriz de enteros y imprime el resultado
los valores y el tamano de la matriz seran elegidas por el usuario*/

#include <stdio.h>

int MAX=8; //se debe introducir para que funcione bien

/*funcion entrada: el usuario introduce los datos*/
void entrada (int matriz[MAX][MAX], int *filas, int *columnas) {
    int i, j;

    /*el usuario introduce los datos*/
    printf("Introduce el numero de filas:\n");
    scanf("%d", filas);

    printf("Introduce el numero de columnas (maximo %d):\n", MAX);
    scanf("%d", columnas);

    printf("Introduce los valores de la matriz(maximo %d):\n", MAX);
    for (i = 0; i < *filas; i++) {
        for (j = 0; j < *columnas; j++) {
            printf("Valor en la posicion (%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La matriz queda asi:\n"); //imprimimos la matriz para poder comprobar que los calulos estan bien hechos
    for (i = 0; i < *filas; i++) {
        for (j = 0; j < *columnas; j++) {
            printf("%d ", matriz[i][j]);  // imprime cada numero
        }
        printf("\n"); // salto de linea: para formar correctamente la matiz
    }
}

int suma_bordes (int matriz[MAX][MAX], int filas, int columnas){
    int i, j, k, suma=0;

    /*bucles para sumar*/
    /*bucles para sumar*/ for (i = 0; i < filas; i++) { 
        for (j = 0; j < columnas; j++) { 
            // sumar los elementos de la primera o ultima fila 
            // o de la primera o ultima columna 
            if (i == 0 || i == filas -1|| j == 0 || j == columnas - 1) { 
                suma += matriz[i][j]; 
            } 
        } 
    }
    return suma;
}

void resultado (int salida) { //imprimimos el resultado
    printf("La suma de los bordes es: %d", salida);
}

int main (){
    int matriz[MAX][MAX], filas, columnas, suma;
    entrada(matriz, &filas,&columnas);
    suma=suma_bordes(matriz, filas, columnas);
    resultado(suma);
}
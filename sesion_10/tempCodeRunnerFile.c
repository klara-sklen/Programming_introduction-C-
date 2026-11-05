/*Sesion 10 - ejercicio 1: programa modularizado que 
calcula la media de filas o de columnas de una matriz cuyo tamano 
depende del usuario*/
#include <stdio.h>

int MAX=8; //se debe introducir para que funcione bien

/*funcion entrada: el usuario introduce los datos*/
void entrada (float matriz[MAX][MAX], int *filas, int *columnas) {
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
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("La matriz queda asi:\n"); //imprimimos la matriz para poder comprobar que los calulos estan bien hechos
    for (i = 0; i < *filas; i++) {
        for (j = 0; j < *columnas; j++) {
            printf("%.4f ", matriz[i][j]);  // imprime cada numero
        }
        printf("\n"); // salto de linea: para formar correctamente la matiz
    }
}

/*calculo de la media de cada fila*/
void media_filas (float matriz [MAX][MAX], int filas, int columnas, float resultado[MAX]) {
    int i, j;

    for (i = 0; i < filas; i++) {
        resultado[i]=0; //iniciamos

        for (j = 0; j < columnas; j++) {
            resultado[i] += matriz[i][j]; //sumamos el termino (i,j) para hacer el incremento
        }
        resultado[i] /= columnas; //dividimos entre el numero de columnas
    }
}

/*calculo de la media de cda columna*/
void media_columnas (float matriz [MAX][MAX], int filas, int columnas, float resultado[MAX]) {
    int i, j;

    for (i = 0; i < columnas; i++) {
        resultado[i]=0; //iniciamos

        for (j = 0; j < filas; j++) {
            resultado[i] += matriz[j][i]; //sumamos el termino (j,i) para hacer el incremento
        }
        resultado[i] /= filas; //dividimos entre el numero de filas
    }
}

/*funcion que imprime los resultados*/
void imprimir_resultados(float vector[MAX], int tamaño, char tipo) {
    int i;
    if (tipo=='f') printf("La media de cada fila es:\n[");
    else printf("La media de cada columna es:\n[");
    for (i = 0; i < tamaño; i++) {
        printf("%.3f", vector[i]);
        if (i < tamaño - 1) printf(", ");
    }
    printf("]\n");
}

int main (){
    int filas, columnas, opcion;
    float matriz[MAX][MAX], resultados[MAX];

    entrada(matriz, &filas, &columnas);
    
    printf("Quiere calcular la media de las columnas (introduzca 0) o por filas (introduzca 1)\n" );
    scanf("%d", &opcion);
    if (opcion==0){
        media_columnas(matriz, filas, columnas, resultados);
        imprimir_resultados(resultados, columnas, 'c'); //c indica columnas
    }
    if (opcion==1){
        media_filas(matriz, filas, columnas, resultados);
        imprimir_resultados(resultados, filas, 'f'); //f indica filas
    }
    return 0;
}

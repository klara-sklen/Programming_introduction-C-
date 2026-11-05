/*Sesion 10 - ejercicio 3: busca un numero en una matriz: indica si esta o no, 
en el caso que si, guarda las coordenadas del numero en un vector*/
    #include <stdio.h>
    #include <stdbool.h>

 #include <stdio.h>
#include <stdbool.h>

const int MAX = 10;

/* Funcion que lee la matriz */
void entrada(int matriz[MAX][MAX], int *filas, int *columnas) {
    int i, j;

    printf("Introduce el numero de filas (maximo %d):\n", MAX);
    scanf("%d", filas);

    printf("Introduce el numero de columnas (maximo %d):\n", MAX);
    scanf("%d", columnas);

    printf("Introduce los valores de la matriz:\n");
    for (i = 0; i < *filas; i++) {
        for (j = 0; j < *columnas; j++) {
            printf("Valor en la posicion (%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La matriz queda asi:\n");
    for (i = 0; i < *filas; i++) {
        for (j = 0; j < *columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

/* Funcion que pide el numero que el usuario quiere buscar */
int pedir_numero() {
    int numero;
    printf("Que numero busca?\n");
    scanf("%d", &numero);
    return numero;
}


/*Funcion busca_numero:*/
bool busca_numero(int matriz[MAX][MAX], int filas, int columnas, int numero_buscado, int fila_encontrado[], int col_encontrado[], int *num_encontrados) {
    int i, j, se_encuentra=0;
    *num_encontrados = 0;  // Inicializamos contador

    //recorre la matriz
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (matriz[i][j] == numero_buscado) {
                fila_encontrado[*num_encontrados] = i+1;  // Guardamos coordenadas
                col_encontrado[*num_encontrados] = j+1;
                *num_encontrados++;
            }
        }
    }
    if (*num_encontrados!=0){
        se_encuentra=1; //true si hay al menos un numero igual al que buscamos
    }

    return se_encuentra;
}

/* Funcion para imprimir todas las coordenadas encontradas */
void imprimir_coordenadas(int fila[], int col[], int cantidad) {
    int i;
    printf("\nCoordenadas donde aparece el numero:\n");
    for (i = 0; i < cantidad; i++) {
        printf("(%d, %d)\n", fila[i], col[i]);
    }
}

int main() {

    int matriz[MAX][MAX];
    int filas, columnas, numero, num_encontrados;

    int fila_encontrado[MAX * MAX], col_encontrado[MAX * MAX];   // Vector para coordenadas

    entrada(matriz, &filas, &columnas);

    numero = pedir_numero();

    if (busca_numero(matriz, filas, columnas, numero, fila_encontrado, col_encontrado, &num_encontrados)==1) {
        printf("\nEl numero aparece en la matriz %d veces.\n", num_encontrados);
        imprimir_coordenadas(fila_encontrado, col_encontrado, num_encontrados);
    } else {
        printf("\nEl numero no aparece en la matriz.\n");
    }

    return 0;
}
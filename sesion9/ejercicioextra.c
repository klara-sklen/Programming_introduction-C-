/*Ejercicio extra: comprobar si un vector esta ordenado de forma ascendente
o descendente*/
/*+comprueba si un vector esta ordenado*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int TAM=10; //el vector tendra un tamano fijo de 10 elementos

/*comprobamos que el vector esta ordenado*/
int ordenado (int v[]){
    int i, ord;
    /*dos bucles for: sirven para determinar si el bucle esta ordenado de forma
    ascendente/descendente o si los elementos son iguales*/
    for (i=0;i<TAM-1;i++){ //tengo que tener dos bucles sino siempre sale que esta ordenado
        if (v[i]<=v[i+1]){ 
            ord=1;
        }
        else {
            ord=0; 
        }
    }

    for (i=0;i<TAM-1;i++){
        if (v[i]>=v[i+1]){
            ord=1;
        }
        else {
            ord=0;
        }
    }
    
    return ord; //0=no esta ordenado; 1=esta ordenado (luego se determina el tipo) o todos los numeros son iguales
}

void tipo_orden(int *V){
     int i;
    for (i=0;i<TAM-1;i++)
        if (V[i]<V[i+1]){
            printf("El vector esta ordenado de forma ascendente.\n");
    }
    for (i=0;i<TAM-1;i++)
        if (V[i]>V[i+1]){
            printf("El vector esta ordenado de forma descendente.\n");
    }
    for (i=0;i<TAM-1;i++)
        if (V[i]==V[i+1]){
            printf("Todos los elementos del vector son iguales.\n");
    }
}

int main (){
    int V[TAM];
    int i;
    bool ordenar;
    
    printf("Introduce 10 numeros enteros:\n");
    for (i=0;i<TAM;i++){
        printf("Numero %d:\n", i+1);
        scanf("%d", &V[i]);
    }
    ordenar=ordenado(V);
    if (ordenar==1){
        tipo_orden(V);
    }
        else {
            printf("El vector no esta ordenado.\n");
        }
    return 0;
}
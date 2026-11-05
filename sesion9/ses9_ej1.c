/*Sesion 9: ejercicio 1: un programa que dado un vector de tamano 10 ordena los valores:
los primeros 5 en orden ascendente, los otro 5 en orden descendente: usar solo una funición de ordenación*/
#include <stdio.h>
#include <stdlib.h>

void ordenar(int V[], int start, int end, int orden){
    int i, j, temp;

    for (i = start; i < end; i++){
        for (j = start; j < end - (i - start); j++){
            if (orden == 1){ /* ascendente */ //orden es el parametro que exigia el enunciado
                if (V[j] > V[j+1]){
                    temp = V[j];
                    V[j] = V[j+1];
                    V[j+1] = temp;
                }
            } else { /* descendente */
                if (V[j] < V[j+1]){
                    temp = V[j];
                    V[j] = V[j+1];
                    V[j+1] = temp;
                }
            }
        }
    }
}

int main(){
   const int TAM=10; //iniciamos la constante tamano
   int V[TAM], i=0;

   /*el usuario introduce los valores*/
   printf("Introduce 10 numeros enteros:\n");
   for (i=0;i<TAM;i++){
      printf("Numero %d:\n", i+1);
      scanf("%d", &V[i]);
   }

   /* imprimimos el vector original */
   printf("\nVector original:\n"); //para que el usuario lo vea
   for (i=0;i<TAM;i++){
      printf("%d ", V[i]);
   }
   printf("\n");

   /* ordenar primeros 5 en ascendente */
   ordenar(V, 0, 4, 1); //el ultimo 1 indica que se hara ascendente

   /* ordenar ultimos 5 en descendente */
   ordenar(V, 5, 9, 0); //el cero indica que se ordende descendentemente

   /* mostrar resultado final */
   printf("\nVector ordenado:\n");
   for (i=0;i<TAM;i++){
      printf("%d ", V[i]);
   }
   printf("\n");

   return 0;
}

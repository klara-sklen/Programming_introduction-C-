/*Sesion 9: ejercicio 2: un programa que ordene solo los pres de un vector de enteros
usando el algoritmo de selección*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   const int TAM=10;
   int V[TAM], i, min_i, j, temp, n;
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

   /*ordenamos el vector*/
      for (i = 0; i<TAM; i += 2) { //solo indices pares: va construyendo el sub-vector ordenado
         min_i = i;
         for (j = i + 2; j < TAM; j += 2) { //buscamos el minimo, sumamos 2 para mantener pares
            if (V[j] < V[min_i]){
                min_i = j;
                }
            }

          if(min_i!=i){ //itercambiar el minimo valor con la posicion i
            temp=V[i];
            V[i]=V[min_i];
            V[min_i]=temp;
            }
      }

   /*imprimimos el vector ordenado*/
printf("\nVector ordenado:\n");
   for (i=0;i<TAM;i++){
      printf("%d ", V[i]);
   }
   printf("\n");


    return 0;
}

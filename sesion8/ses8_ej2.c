/*Sesion 8 - ejercicio 2: programa que elimina elementos repetidos
de un vector, guardando el resultado en el mismo vector*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   int tamano=10, i, j, k; //a principio el tamano sera 10
   int vector[10]; //vector de tamano que contenga los valores

   printf("Va introduciendo 10 numeros enteros:\n");
   /*el usuario introduce los diez numeros*/
   for (i=0;i<tamano;i++){
      scanf("%d",&vector[i]);
   }
      /*eliminacion de repetidos*/
   for (i=0;i<tamano;i++){ //recorre todos los elementos del vector
      for (j=i+1; j<tamano; j++){ //compara con los siguientes valores
         if (vector[i]==vector[j]){ // se ejecuta si se esta repitiendo
            for (k=j; k<tamano-1; k++){
               vector[k]=vector[k+1]; //elimina el ultimo numero del vector
            }
            tamano--; //reduce el tamano del vectorr
            j--; //retrocede k una posicion
         }
      }
   }
   printf("\nVector sin elementos repetidos:\n");
   for (i = 0; i < tamano; i++) {
      printf("%d ", vector[i]);
}
   return 0;
}

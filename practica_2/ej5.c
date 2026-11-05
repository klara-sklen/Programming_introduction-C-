/*Practica 2, ejercicio 5 - expresar mediante estructuras condicionales anidadas y utilizando
las condiciones simples las condiciones dadas*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int A, B, C, D, E; //iniciamos las variables
printf("Ingrese el primer numero: "); //el usuario introduce los valores
scanf("%d", &A);
printf("Ingrese el segundo numero: ");
    scanf("%d", &B);
printf("Ingrese el tercer numero: ");
    scanf("%d", &C);
printf("Ingrese el cuarto numero: ");
    scanf("%d", &D);
printf("Ingrese el quinto numero: ");
    scanf("%d", &E);
//las expresiones fueron reescritas a las siguientes estructuras anidadas//
if (A<B) {
   if (C!=D){ // en vez de && utilizamos if
      if (B>D){
         printf("S1\n");
         printf("S2\n");
      } else if (B == D) { // en vez de || utilizamos else y luego if
            printf("S1\n");
      } else if (B == E) {
            printf("S2\n");
      }
   }
}
    return 0;
}

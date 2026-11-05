/*Practica 2, ejercicio 3 - reescribir el codigo proporcionado utilizando unicamente estructuras condicionales no anidadas */
#include <stdio.h>
#include <stdlib.h>

int main(){
float A, B, C, D; //iniciamos las variables
printf("Ingrese el primer numero: "); //el usuario introduce los valores
    scanf("%d", &A);
printf("Ingrese el segundo numero: ");
    scanf("%d", &B);
printf("Ingrese el tercer numero: ");
    scanf("%d", &C);
printf("Ingrese el cuarto numero: ");
    scanf("%d", &D);

if ((A>B)&&(B<=C)&&(C!=D)){ //si se cumplen todas las condiciones
   printf("S1\n");
}
else if ((A>B)&&(B<=C)&&(C==D)){ //no se cumple la ultima condicion
   printf("S2\n");
}
else if ((A>B)&&(B>C)){ //solo se cumple la primera condicion
   printf("S3\n");
}
else if (A<=B){
   printf("S4\n"); //no se cumple ninguna
}
return 0;
}

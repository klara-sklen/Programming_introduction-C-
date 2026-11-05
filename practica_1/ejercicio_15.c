//Ejercicio 15 - este programa intercambia valores de dos variables enteras
#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c; //iniciamos las variables

 //a continuacion el usuario introduce los valores de a y b
printf("Ingrese el valor de a: ");
scanf("%d", &a);

printf("Ingrese el valor de b: ");
scanf("%d", &b);

printf("Antes del intercambio: a = %d, b = %d\n", a, b); //los valores antes del intercambio

c=a;
a=b;
b=c;

printf("Ahora los valores son: a = %d, b = %d", a, b); //muestra los valores intercambiados
    return 0;
}

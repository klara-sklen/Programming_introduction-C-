/*Practica 2 - ejercicio 11: realizar un programa para calcular la suma de los 100 primeros
terminos de la sucesion*/

#include<math.h> //incluyemos las bibliotecas necesarias
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    double a_n, suma=0.0;
    for (n=1; n<=100;n++){ //contador empieza en 1, termina en 100, incrementa en 1
         a_n = pow(-1, n) * (pow(n, 2) - 1) / (2.0 * n); //la formula de la suma
        suma += a_n;
    }
        printf("La suma de los 100 primeros términos es: %.6f\n", suma);

    return 0;
}

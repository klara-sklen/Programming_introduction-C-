/*Practica 2 - ejercicio 12: realizar un programa para calular los valores de la funcion 
para parejas de valores datas*/

#include<math.h> //incluyemos las bibliotecas necesarias
#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y; //iniciamos las dos variables
    float f; //valor de la funcion

    for (x=-50;x=50;x++){
        for (y=-40;y=40;y++){
            f=sqrt(x)/(pow(y,2)-1);
            printf("El valor de la funcion f para el par de valores (%d,%d) es: %f \n", x, y, f);
        }
    }



    return 0;
}
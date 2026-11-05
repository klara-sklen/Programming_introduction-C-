/*Practica 2, ejercicio 1 - determinar cuales de las siguientes expresiones son validas*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 //apartado a//
 (2*I)<=J; // verdadero
 //apartado b//
 (2*I-1)<J; //verdadero
 //apartado c//
(I>0)&&(I<=10); //verdadero
//aparado d//
(I>25)||(J>5); //verdadero
//apartado e//
(I<4)||(J>5); //verdadero
//apartado f
!(I>6); //verdadero
 return 0;
}

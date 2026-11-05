//Ejercicio 19 - calcula las distancias que recorren antes de chocarse
#include <stdio.h>
#include <stdlib.h>

int main(){
float V_1, V_2, D, t, d_1, d_2; //el usurario introduce las variables - km/h y km
printf("Ingrese las velocidades de las locomotoras y la distancia entre ellas \n (V_1, V_2, D):"); // el usuario igresa V1, V2 y D
scanf("%f %f %f", &V_1, &V_2, &D);

t=D/(V_1+V_2); //calcula el instante del choque
d_1=t*V_1; //distancia que recorre la primera locomotora hasta el choque
d_2=D-d_1; // distancia que recorre la segunda locomotora hasta el choque

printf("La primera locomotra recorre %f km. \n La segunda locomotora recorre %f km.", d_1, d_2); //imprime el resultado

return 0;
}

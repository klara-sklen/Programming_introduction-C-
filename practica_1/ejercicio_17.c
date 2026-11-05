// Ejercicio 17 - traduce unas expresiones matematicas en expresiones validas en C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float x, y, h;
float resultado_a, resultado_b, resultado_c; // iniciamos las variables necesarias

printf("Ingrese las tres incognitas (x y h): "); // el usuario va a ingeresar las tres incognitass
scanf("%d %d %d", &x, &y, &h);

//expresion a
resultado_a = (1 + fabs((pow(x,2)) / y)) / (pow(x, 3) / (1 + y));

//expresion b
resultado_b = (1 + (1.0/3.0) * sin(h) - (1.0/7.0) * cos(h)) / (2 * h);

//expresion_c
resultado_c=sqrt(1+pow(exp(x)/(pow(x,2)),2));

//muestra los resultados
printf("Resultado a) %f\n", resultado_a);
printf("Resultado b) %f\n", resultado_b);
printf("Resultado c) %f\n", resultado_c);

return 0;
}

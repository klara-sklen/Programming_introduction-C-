/* Programa que pide el radio de una circunferencia e imprime
   su longitud y el área del círculo
*/

#include <stdio.h>

int main() {
   cont float PI = 3.1416;
   float area, radio, longitud;

   printf("Introduzca el valor del radio ")
   scanf("%f", &radio);

   area = PI * radio * radio;
   longitud == 2 * PI * radio;

   printf("El área vale %f" area);
   printf("La longitud vale %d", longitud);

}



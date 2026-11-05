/* Programa que pide el radio de una circunferencia e imprime
   su longitud y el área del círculo
*/

#include <stdio.h>

int main() {
   const float PI = 3.1416;
   float area=0, radio, longitud=0;

   printf("Introduzca el valor del radio ");
   scanf("%f", &radio);

   area = PI * radio * radio;
   longitud = 2 * PI * radio;

   printf("El área vale %f", area);
   printf("La longitud vale %f", longitud);
   return 0;
}



/* Programa que calcula la hipotenusa de un triangulo
   rectangulo segun el teorema de Pitagoras.
*/

#include <stdio.h>  /* Inclusión de recursos de E/S */
#include <math.h>   /* Inclusión de recursos matemáticos*/

int main(){           /* Programa Principal */
   float lado1;       /* Declara variables para guardar */
   float lado2;       /* los dos lados y la hipotenusa */
   float hip=0;


   printf("Introduzca la longitud del primer cateto: ");
   scanf("%f", &lado1);
   printf("Introduzca la longitud del segundo cateto: ");
   scanf("%f", &lado2);

   hip = sqrt(lado1*lado1 + lado2*lado2);

   printf("La hipotenusa vale %f", hip) ;

   	return 0;
   	}

/* Programa que calcula la hipotenusa de un triangulo
   rectangulo segun el teorema de Pitagoras.
*/

#include <stdio.h>  /* Inclusión de recursos de E/S */
#include <math.>   /* Inclusión de recursos matemáticos*/

int main(){           /* Programa Principal */
   float lado1;       /* Declara variables para guardar */
   float lado2;       /* los dos lados y la hipotenusa */



   printf("Introduzca la longitud del primer cateto: ")
   	scanf("%f", &lado1);
   printf("Introduzca la longitud del segundo cateto: ");
   scanf("%d", lado2);

   float hip;
   hip = sqrt(lado1*lado1 + lado2+lado2);

   printf("\nLa hipotenusa vale %f\n\n", hip) ;

   	return(0);
}

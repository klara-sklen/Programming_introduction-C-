#include <stdio.h>
#include <stdlib.h>

int main(){
float tension;
float corriente;
   printf("Introduzca el valor de la tension ");
   scanf("%f", &tension);
   printf("Introduzca el valor de la corriente ");
   scanf("%d", &corriente);
   float resistencia;
   resistencia=tension/corriente;
   printf("\nLa resistencia vale %f\n\n", resistencia) ;

    return 0;
}

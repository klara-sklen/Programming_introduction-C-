#include <stdio.h>
#include <stdlib.h>

int main(){
float tension;
float corriente;
float resistencia=0;
   printf("Introduzca el valor de la tension ");
   scanf("%f", &tension);
   printf("Introduzca el valor de la corriente ");
   scanf("%f", &corriente);
   resistencia=tension / corriente;
   printf("La resistencia vale %f", resistencia);

    return 0;
}

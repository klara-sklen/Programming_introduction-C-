#include <stdio.h>
#include <stdlib.h>

int main(){
float base;
float altura;
float area=0;
   printf("Introduzca la altura del triangulo ");
   scanf("%f", &altura);
   printf("Introduzca la base del triangulo ");
   scanf("%f", &base);
   area=altura*base/2;
      printf("La area del triangulo vale %f", area) ;

    return 0;
}

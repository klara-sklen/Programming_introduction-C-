#include <stdio.h>
#include <stdlib.h>

int main(){
float base;
float altura;
float area;
   printf("Introduzca la altura del triangulo ");
   scanf("%f", &altura);
   printf("Introduzca la base del triangulo ");
   scanf("%d", &base);
   area=altura*base/2;
      printf("\nLa area del triangulo vale %f\n\n", area) ;

    return 0;
}

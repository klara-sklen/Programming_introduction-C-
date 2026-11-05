#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
const int Tercio_de_cerveza=330; //en ml
float cuantos_puedo; //cuantas cervezas puedo tomar si no quiero tomar mas de 50 ml de alc
const int Max_alcohol=50; //en ml
float porcentaje; //el porcentaje de alcohol tiene la cerveza
printf("Que porcentaje de alcohol tiene la cerveza:");
scanf("%d, &porcentaje");
cuantos_puedo=Max_alcohol/(Tercio_de_cerveza*(porcentaje)/100);
printf("Se pueden tomar %d cervezas",cuantos_puedo);


 return 0;
}

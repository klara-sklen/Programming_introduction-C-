#include <stdio.h>
#include <stdlib.h>

int main(){
float costo_del_vehiculo=0, precio_final=0; //iniciar las variables necesarias
const float IVA=0.18; //el I.V.A es de 18%
const float GANANCIA_VENDEDOR=0.2; //el vendedor gana 20%
printf("Ingrese el costo del vehiculo:"); //el usuario introduce el coste del coche
scanf("%f", &costo_del_vehiculo);
precio_final=costo_del_vehiculo*((1+GANANCIA_VENDEDOR)+(1+GANANCIA_VENDEDOR)*IVA); //el precio final se compone de la suma del coste, el IVA y la ganancia del vendedor
printf("El precio final del vehiculo es: %f\n", precio_final);


return 0;
}

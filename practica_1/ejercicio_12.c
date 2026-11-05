/*Practica 1 - ejercicio 12- programa para pasar de ritmo (min/km) a una velocidad en km/hora*/
#include <stdio.h>
int main(){
float ritmo, velocidad; //iniciamos las variables
//pedimos al usuario que introduzca los datos
printf("Introduce el ritmo (min/km): ");
scanf("%f", &ritmo);
//calculamos la velocidad
velocidad=60.0/ritmo;
printf("La velocidad del corredor es: %.2f km/h.", velocidad);

return 0;    
}
